import sys
import csv
from collections import defaultdict

def main():
    # Read input data from standard input
    input_data = sys.stdin.read().strip().splitlines()
    
    events = {}
    parent_to_children = defaultdict(list)
    acronym_to_parents = defaultdict(set)

    # Parse input data
    for line in input_data:
        parts = line.split(',')
        event_id = parts[0].strip()
        title = parts[1].strip().strip('"')
        acronym = parts[2].strip().strip('"')
        project_code = parts[3].strip().strip('"')
        three_digit_code = parts[4].strip().strip('"')
        record_type = parts[5].strip().strip('"')

        # Store the event details
        events[event_id] = {
            'title': title,
            'acronym': acronym,
            'project_code': project_code,
            'three_digit_code': three_digit_code,
            'record_type': record_type
        }

        # Associate parent events with their children
        if record_type == "Parent Event":
            parent_to_children[event_id] = []
            acronym_to_parents[acronym].add(event_id)
        elif record_type == "IEEE Event":
            parent_id = parts[6].strip() if len(parts) > 6 else ''
            parent_to_children[parent_id].append(event_id)

    # Prepare the output
    output = []
    excluded_ids = []

    # Determine valid parents and their children
    for parent_id, children_ids in parent_to_children.items():
        if events[parent_id]['acronym'] == "":
            excluded_ids.append(parent_id)
            continue
        
        if not children_ids:
            excluded_ids.append(parent_id)
            continue
        
        # Determine project codes for children
        child_codes = {events[child_id]['three_digit_code'] for child_id in children_ids if events[child_id]['acronym']}
        
        if len(child_codes) > 1:
            events[parent_id]['three_digit_code'] = "???"
        else:
            events[parent_id]['three_digit_code'] = child_codes.pop() if child_codes else "???"
        
        # Add parent to output
        output.append(f'{parent_id},"{events[parent_id]["title"]}","{events[parent_id]["acronym"]}",,{events[parent_id]["three_digit_code"]},"Parent Event"')
        
        # Add children to output, sorted by title then by ID
        children_ids.sort(key=lambda id: (events[id]['title'], id))
        for child_id in children_ids:
            if events[child_id]['acronym'] == "":
                excluded_ids.append(child_id)
                continue
            output.append(f'{child_id},"{events[child_id]["title"]}","{events[child_id]["acronym"]}",{events[child_id]["project_code"]},{events[child_id]["three_digit_code"]},"IEEE Event",{parent_id}')

    # Print results
    output.sort(key=lambda line: line.split(',')[2])  # Sort by acronym
    for line in output:
        print(line)

    # Print excluded IDs
    if excluded_ids:
        print("The excluded events' IDs are:")
        print(",".join(excluded_ids))

if __name__ == "__main__":
    main()
