#include <iostream>
using namespace std;

extern void count_digits(int array[4][4]);

int main(){
    int matrix[4][4] = {
        {0,4,1,5},
        {1,2,0,8},
        {1,2,1,4},
        {0,1,2,5}
    };

    count_digits(matrix);
}