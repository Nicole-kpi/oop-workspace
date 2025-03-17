#include <iostream>
#include "workshop.h"
using namespace std;


int main() {
    int size = 5;
    double initValue = 4.15;
    
    // 1. 创建动态数组
    double* arr = dynamicArray(size, initValue);
    
    // 2. 打印数组
    cout << "Initial array: ";
    printArray(arr, size);
    
    // 3. 修改数组第一个元素
    changeValue(&arr[0]);
    
    // 4. 打印修改后的数组
    cout << "After changeValue: ";
    printArray(arr, size);
    
    // 5. 计算最大值
    double maxVal = arrayMax(arr, size);
    cout << "Maximum value: " << maxVal << endl;

    // 6. 释放动态数组
    delete[] arr;

    return 0;
}