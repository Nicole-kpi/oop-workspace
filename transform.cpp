#include <bitset>
#include <iostream>

using namespace std;

int main(){
    int decimal;
    cout << "Enter the decimal number: ";
    cin >> decimal;
    bitset<16>binary(decimal);
    //bitset<8> unitializationset;
    //bitset<8> decimalBitset(15);
    //bitset<8>

    cout << "binary result: " << binary << endl;
    return 0; 
}



