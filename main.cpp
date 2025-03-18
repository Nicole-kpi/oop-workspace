#include <iostream>
#include "workshop.h"
using namespace std;


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