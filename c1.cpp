#include <iostream>
#include <string>
using namespace std;

// void increment(int x) {
//     x++;
// }

// int main() {
//     int a = 5;
//     increment(a);
//     std::cout << a << std::endl;
//     return 0;
// }


// int main() {
//     int *p = new int(42);
//     delete p;
//     std::cout << *p << std::endl;
//     return 0;
// }


// int main() {
//     int arr[3] = {10, 20, 30};
//     int *p = arr;
//     std::cout << *(p + 2) << std::endl;
//     return 0;
// }

// class Test {
// public:
//     void set(int x = 10) {
//         std::cout << x << std::endl;
//     }
// };

// int main() {
//     Test t;
//     t.set();  // 调用set函数，输出0 
//     return 0;
// }

// class Box {
// public:
//     Box() {
//         std::cout << "Box created\n";
//     }
//     // Box(int x) {
//     //     std::cout << "Box created with value: " << x << "\n";
//     // }
// };

// int main() {
//     Box b(0);  //
//     return 0;  // 编译错误：没有匹配的构造函数
// }

// class Box {
//     public:
//     Box(int a, int b = 10){
//         std::cout << a + b << std::endl; // 输出a和b的和
//     }
// };

// int main() {
//     Box b(5);  // 调用Box的构造函数，b的值为5，默认b的值为10
//     return 0;  // 输出15
// }

// int main(){
//     int a = 1;
//     int* b = &a; // b是指向a的指针
//     cout << *b << endl; // 输出指针b指向的值，即a的值
//     return 0; // 返回0表示程序正常结束

// int main(){
//     int *p; // 定义一个指针p
//     int a[200]; // 定义一个整数数组a
//     p = a; // 将指针p指向数组a的首地址   
//     for (int i=0; i<10; i++){
//         *(p + i) = i; // 将i的值赋给指针p指向的内存地址
//     }
//     ++p; // 将指针p向后移动一个位置
//     cout << *p << endl; // 输出指针p指向的值，即1
//     cout << p[0] << endl; // 输出指针p指向的第一个元素，即1
//     p = a + 6;
//     cout << *p << endl; // 输出指针p指向的值，即6
//     return 0; // 返回0表示程序正常结束
// }

// class A2 {
// protected:
//     int x = 5;
// public:
//     virtual void print() { cout << x; }
// };

// class B2 : public A2 {
// public:
//     void print() override { cout << x * 2; }
// };

// int main() {
//     A2* obj = new B2();
//     obj->print();
//     delete obj;
// }

// class A8 {
// public:
//     static int count;
//     A8() { count++; }
// };

// int A8::count = 0;

// int main() {
//     A8 a1, a2, a3;
//     cout << A8::count;
//     return 0;
// }

// void print(int x = 1) {
//     cout << "int";
// }

// void print(double x) {
//     cout << "double";
// }

// int main() {
//     print();  // ?
//     return 0;
// }

// class A {
// public:
//     ~A() { cout << "A"; }
// };

// class B {
//     A a;
// public:
//     ~B() { cout << "B"; }
// };

// int main() {
//     B b;
//     return 0;
// }

class Engine {
public:
    Engine() { cout << "Engine"; }
};

class Car {
    Engine e;
public:
    Car() { cout << "Car"; }
};

int main() {
    Car c;
    return 0;
}
