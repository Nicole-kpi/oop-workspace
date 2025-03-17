#include <iostream>
#include "workshop.h"
using namespace std;

extern double arrayMax(double* arr, int size);
extern void printArray(double* arr, int size);
extern double* dynamicArray(int N, double M);
extern void changeValue(double* ptr);

int main() {
    int size = 5;
    double initValue = 4.15;
    
    double* arr = dynamicArray(size, initValue);
    
    cout << "Initial array: ";
    printArray(arr, size);
    
    changeValue(&arr[0]);
    
    cout << "After changeValue: ";
    printArray(arr, size);
    
    double maxVal = arrayMax(arr, size);
    cout << "Maximum value: " << maxVal << endl;

    delete[] arr;

    return 0;
}