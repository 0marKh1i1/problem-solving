#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

void brickStacks(int N, int x, vector<int>& A) {
    // Sort bricks in ascending order
    sort(A.begin(), A.end());

    // Min-heap to keep track of the smallest top brick of each stack
    priority_queue<int, vector<int>, greater<int>> minHeap;

    for (int brick : A) {
        if (!minHeap.empty() && minHeap.top() + x <= brick) {
            minHeap.pop();
        }
        minHeap.push(brick);
    }

    // Output the number of stacks
    cout << minHeap.size() << endl;

    // To output the stacks, we need to reconstruct them
    // This part is not optimized but necessary for the output format
    vector<vector<int>> stacks(minHeap.size());
    for (int brick : A) {
        for (auto& stack : stacks) {
            if (stack.empty() || stack.back() + x <= brick) {
                stack.push_back(brick);
                break;
            }
        }
    }

    for (const auto& stack : stacks) {
        cout << stack.size();
        for (int brick : stack) {
            cout << " " << brick;
        }
        cout << endl;
    }
}

int main() {
    int N, x;
    cin >> N >> x;
    vector<int> A(N);
    
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    brickStacks(N, x, A); 
    
    return 0;
}
