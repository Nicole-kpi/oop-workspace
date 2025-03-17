#include <iostream>
using namespace std;

double* dynamicArray(int N, double M){
    double* arr = new double[N];
    for (int i = 0; i < N; i++){
        arr[i] = i * 4.15;
    }
    return arr;  
}
