#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    
    std::vector<int> arr(n);

    // Input elements into the vector
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    // Initialize hash array with size 13
    std::vector<int> hash(13, 0);

    // Count the frequency of each element
    for (int i = 0; i < n; i++) {
        hash[arr[i]] += 1;
    }

    int q;
    std::cin >> q;

    while (q--) {
        int number;
        std::cin >> number;
        std::cout << hash[number] << std::endl;
    }

    return 0;
}
