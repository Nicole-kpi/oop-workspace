#include <iostream>
#include <vector>
#include <algorithm>

int* readNumbers() {
    int* numbers = new int[10]; 
    for (int i = 0; i < 10; i++) {
        std::cin >> numbers[i];
    }
    return numbers;
}

void printNumbers(int* numbers, int length) {
    for (int i = 0; i < length; i++) {
        std::cout << i << " " << numbers[i] << std::endl;
    }
}

int secondSmallestSum(int* numbers, int length) {
    if (length <= 1) {
        return -1; 
    }

    std::vector<int> sums;


    for (int start = 0; start < length; start++) {
        int sum = 0;
        for (int end = start; end < length; end++) {
            sum += numbers[end];
            sums.push_back(sum);
        }
    }

    std::sort(sums.begin(), sums.end());
    return sums[1]; 
}