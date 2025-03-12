#include <iostream>

extern int sum_diagonal(int array[4][4]);

using namespace std;
int main(){
    int matrix[4][4] = {
        {0,4,1,5},
        {1,2,0,8},
        {1,2,1,4},
        {0,1,2,5}
    };
    cout << "Sum of diagonal: " << sum_diagonal(matrix) << endl;
}