#include <iostream>
#include <string>

using namespace std;

// void addOnetoX(int* p){
//     *p = *p + 1; // 将指针p指向的值加1
// }

// int main(){
//     int x = 100;
//     addOnetoX(&x); // 传递x的地址给addOnetoX函数
//     cout << x << endl; // 输出x的值，此时x已经被修改为101
//     return 0;
// }

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

// int main(){
//     int a[] = {1, 2, 3};
//     int b[3];
//     b = a;
//     for(int i = 0; i < 3; i++){
//     cout << a[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

// int main(){
//     int x = 1;
//     int y;
//     y = x;
//     cout << y << endl;
//     return 0;
// }

// struct Book{
//     string tittle;
//     string author;
//     int year;
//     int book_id;

// };
// int main(){
//     Book* b1 ;
//     b1->tittle = "Book1";
//     cout << b1->tittle << endl;
//     return 0;
// }

// class Pig{
//     public:
//     int x;
// };

// int main(){
//     Pig a;
//     cout << a.x << endl;
//     return 0;
// }

// class A{
// private:
//     int _x;
// public:
//     A(int x) : _x(x) {} // 构造函数
//     int getX() const { return _x; } // 获取_x的值
// };

// int main(){
//     A a(10);
//     cout << a.getX() << endl; // 输出10

//     return 0;
// }

// class A{
//     public:
//         int x;
//         A(){
//             cout << "+A";
//         }
//         ~A(){
//             cout << "-A";
//         }
// };

// class B: public A{
//     public:
//         B(){
//             cout << "+B";
//         }
//         ~B(){
//             cout << "-B";
//         }
// };


// int main(){
//     //A a; // 创建A的对象
//     B b; // 创建B的对象，B继承自A
//     // A* a = new B(); // 创建B的对象，但指针类型为A
//     // delete a; // 删除对象，调用B的析构函数和A的析构函数
//     return 0;
// }

// class B{
//     private:
//         int _id;
//     public:
//         B(int id){_id = id;}
//         B():B(0.5){cout << "+B";}
//         int get_id(){return _id;}
//         void set_id(int id){_id = id;}
//         ~B(){
//             cout << "-B";
//         }
// };

// class A{
//     private:
//         B b;
//     public:
//         A(){
//             //b = new B[2];
//             cout << "+A";}
//         ~A(){
//             //delete[] b;
//             cout << "-A";}
// };
// int main(){
//     A a;
//     return 0;
// }

// class Sample {
// private:
//     int x;
// public:
//     Sample(int val) : x(val) {}
//     void setX(int val) { x = val; }
//     int getX() const { return x; }
// };

// int main() {
//     const Sample s(10);
//     std::cout << s.getX() << std::endl;
//     s.setX(20); // Line A
// }


//class MyClass {
// private:
//     int a, b;
// public:
//     MyClass(int x) : a(x), b(0) {}
//     void print() { std::cout << a << " " << b << std::endl; }
// };

// int main() {
//     MyClass obj(5);
//     obj.print();  // Line B
// }

// class Number {
// private:
//     int value = 100;

// public:
//     int get() const { return value; }
//     void set(int v) { value = v; }
// };

// int main() {
//     const Number n;
//     std::cout << n.get() << std::endl;
//     // n.set(50); // Line D
// }

// #include <iostream>
// using namespace std;

// class Animal {
// public:
//     void speak() {
//         cout << "Animal speaks" << endl;
//     }
// };

// class Dog : public Animal {
// public:
//     void speak() {
//         cout << "Dog barks" << endl;
//     }
// };

// int main() {
//     Animal* pet = new Dog();
//     pet->speak();
//     return 0;
// }

