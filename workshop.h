//  #ifndef WORKSHOP_H
//  #define WORKSHOP_H

// void changeValue(double* ptr);
// double arrayMax(double* arr, int size);
// void printArray(double* arr, int size);
// double* dynamicArray(int N, double M);

// #endif

#include <iostream>
using namespace std;

void changeValue(double* ptr){
    *ptr = 42;
}

double* dynamicArray(int N, double M){
    double* arr = new double[N];
    for (int i = 0; i < N; i++){
        arr[i] = M;
    }
    return arr;  
}

void printArray(double* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

double arrayMax(double* arr, int size){
    if (size == 0) return 0;
    double maxVal = arr[0];
    for (int i = 0; i < size; i++){
        if (arr[i] > maxVal){
            maxVal = arr[i];
        }
    }
    return maxVal;
}