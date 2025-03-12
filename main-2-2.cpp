#include <iostream>
#include <bitset>

using namespace std;

extern int binary_to_int(int binary_digits[], int number_of_digits);

int main() {
    int binary1[] = {1, 1, 0, 1}; 
    int binary2[] = {1, 0, 0, 1, 1}; 

    cout << binary_to_int(binary1, 4) << endl;
    cout << binary_to_int(binary2, 5) << endl;

    return 0;
}