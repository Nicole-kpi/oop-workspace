#include <iostream>
#include <string>

using namespace std;


// int main(){
//     int *h = new int(2);
//     int x =  0;

//     cout << h << endl; // 输出h的地址
//     cout << &h << endl;
//     cout << &x << endl; // 输出x的地址 
// }

// int main(){

//     int x = 100;
//     int z = 200;
//     int y = 100;

//     int *p = &x; // p指向x的地址
//     int *q = &y; 
//     int *w = &z; // w指向z的地址

//     cout << p-q << endl; // 输出p和q的地址差
//     return 0; // 输出结果为0，因为p和q指向的是同一个地址，即x的地址
// }

// void b(int* p){
//     *p = *p + 1;
//     int x = 10;
// }

// void a (int* p){
//     *p = *p + 1;
//     int x = 100;
//     b(&x);
// }

// int main(){
//     int x = 0;
//     a(&x);
//     cout << x << endl;
//     return 0;
// }