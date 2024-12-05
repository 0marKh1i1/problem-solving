#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> sequence(n);
    for(int i = 0; i < n; i++) {
        std::cin >> sequence[i];
    }

    int max_element = *std::max_element(sequence.begin(), sequence.end());
    int max_power = 1;
    while(max_power <= max_element) {
        max_power *= 2;
    }
    max_power /= 2;

    int count = std::count_if(sequence.begin(), sequence.end(), [max_power](int num) {
        return num % max_power == 0;
    });

    std::cout << max_power << " " << count << std::endl;

    return 0;
}