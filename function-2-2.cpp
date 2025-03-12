#include <iostream>
#include <bitset>

using namespace std;

int binary_to_int(int binary_digits[], int number_of_digits){
    if (number_of_digits <= 0) return -1;

    bitset<30>binary;
    for (int i = 0; i < number_of_digits; i++){
        binary[number_of_digits - 1 - i] = binary_digits[i];
    }
    return (int)binary.to_ulong();
}