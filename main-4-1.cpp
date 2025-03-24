#include <iostream>

extern int* readNumbers();
extern void printNumbers(int* numbers, int length);
extern int secondSmallestSum(int* numbers, int length);

int main() {
    int* arr = readNumbers();

    int result = secondSmallestSum(arr, 10);
    std::cout << result << std::endl;

    delete[] arr;
    return 0;
}