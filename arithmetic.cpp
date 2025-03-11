#include<iostream>
#include<bitset>
using namespace std;

const int n = 16;

   bitset<n> binary_addition(bitset<n> a, bitset<n> b) {
    return bitset<n>(a.to_ulong() + b.to_ulong());
}

   bitset<n> binary_subtraction(bitset<n> a, bitset<n> b) {
    return bitset<n>(a.to_ulong() - b.to_ulong());
}

   bitset<n> binary_multiplication(bitset<n> a, bitset<n> b) {
    return bitset<n>(a.to_ulong() * b.to_ulong());
}

   bitset<n> binary_division(bitset<n> a, bitset<n> b) {
    if(b.to_ulong() == 0){
        cout << "Wrong, it can't divise 0" << endl;
        return bitset<n>(0);
    }
    return bitset<n>(a.to_ulong() / b.to_ulong());
}

int main(){
    string bin1, bin2;
    char op;

    cout << "Enter the first binary number: ";
    cin >> bin1;
    cout << "enter an operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter the second binary number: ";
    cin >> bin2;

    // transfer to bitset
    bitset<n> num1(bin1);
    bitset<n> num2(bin2);
    bitset<n> result;

    // choose operator
    switch (op) {
        case '+': result = binary_addition(num1, num2); break;
        case '-': result = binary_subtraction(num1, num2); break;
        case '*': result = binary_multiplication(num1, num2); break;
        case '/': result = binary_division(num1, num2); break;
        default: cout << "Invalid operator！" << endl; return 1;
    }

    cout << "binary result: " << result << endl;
    cout << "decimal result: " << result.to_ulong() << endl;

    return 0;
}
