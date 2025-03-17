#include <iostream>
using namespace std;

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


