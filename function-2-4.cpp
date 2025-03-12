#include <iostream>

using namespace std;

int array_min(int integers[], int length){
    int minVal = integers[0];
    if (length <= 0) return -1;
    for (int i = 0; i < length; i++){
        if (integers[i] < minVal){
            minVal = integers[i];
        }
    }
    return minVal;
}

int array_max(int integers[], int length){
    int maxVal = integers[0];
    if (length <= 0) return -1;
    for (int i = 0; i < length; i++){
        if (integers[i] > maxVal){
            maxVal = integers[i];
        }
    }
    return maxVal;
}

int sum_min_max(int integers[], int length){
    if (length <= 0) return -1;
    
    return array_min(integers,length) + array_max(integers,length);
}