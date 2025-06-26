#include <iostream>
#include <string>
using namespace std;

// class A{
// protected:
//     int _a;
// public:
//     A(int a): _a(a){}
//     A():A(100){}
//     void say_hi(){
//         cout << "Hi! I an A\n";
//     }
// };

// class B: public A{
// private:
//     double _r;
// public:
//     B():_r(0.5){}
//     void say_hi(){
//         cout << "Hi! I am B\n";
//     }
// };

// int main(){
//     B b;
//     b.A::say_hi(); // 输出 "Hi! I am A"

//     return 0;
// }

// class A{
//     public:
//         A(){
//             cout << "It is in A";
//         }
// };

// class B: public A{
//     public:
//         B(){
//             cout << "It is in B";
//         }
// };

// int main(){
//     A *a = new B(); // 创建B的对象，但指针类型为A
// }

// class Car{
// protected:
//     string _model;
//     int _year;
// public:
//     Car(string model, int year): _model(model), _year(year){}
//     Car():Car("", 0){} // 默认构造函数，调用带参数的构造函数
// };

// class SportCar : public Car{
// private:
//     int _top_speed;
// public:
//     SportCar(string model, int year, int top_speed): Car(model, year), _top_speed(top_speed){}
//     SportCar(): SportCar("", 0, 0){} // 默认构造函数，调用带参数的构造函数
//     int get_top_speed(){ // 重写基类的虚函数
//         return _top_speed; // 获取最高速度
//     }
// };

// int main(){
//     Car* a_car = new SportCar("BMW", 2007, 250); // 创建SportCar对象，但指针类型为Car应该为SportCar
//     cout << a_car->get_top_speed() << endl; // 输出最高速度

//     return 0;
//}  //错的

// class A{
//     public:
//         void foo(){
//             cout << "This is A\n";
//         }
// };

// class B: public A{
//     public:
//         void foo(){
//             cout << "This is B\n";
//         }
// };

// class C: public B{
//     public:
//         void foo(){
//             cout << "This is C\n";
//         }
// };

// void test(A* a){
//     a->foo(); // 调用A类的foo函数
// }

// int main(){
//     C c; // 创建C类的对象
//     test(&c); // 将C类的对象传递给test函数
//     return 0;
// }

// class Shape{
// public:
//     virtual float get_area() = 0; // 纯虚函数，要求派生类必须实现
// };
// class Circle: public Shape{
// private:
//     float r = 10;
// public:
//     float get_area(){ // 实现纯虚函数
//         return 3.14 * r * r; // 计算圆的面积
//     }
// };

// void print_shape(Shape* s){
//     cout << s->get_area() << endl; // 输出形状的面积
// }

// int main(){
//     Circle c; // 创建Circle对象
//     c.get_area(); // 调用Circle类的get_area函数，计算圆的面积
//     print_shape(&c); // 调用print_shape函数，输出圆的面积
//     //输出相同
//     Shape* s = new Circle(); // 创建Circle对象
//     print_shape(s); // 调用print_shape函数，输出圆的面积
//     return 0;
// }

// class Animal{
// public:
//     virtual void sound() = 0; // 纯虚函数，要求派生类必须实现
// };
// class Dog: public Animal{
// public:
//     void sound(){ // 实现纯虚函数
//         cout << "Woof!" << endl; // 输出狗叫声
//     }
// };
// int main(){
//     Dog d; // 创建Dog对象
//     d.sound(); // 调用Dog类的sound函数
//     //输出相同
//     Animal* a = new Dog(); // 创建指向Animal的指针，指向Dog对象
//     a->sound(); // 调用指针的sound函数，输出狗叫声
//     delete a; // 释放动态分配的内存
//     return 0;
// }

// template <class T, class K>
// class Point{
//     private:
//         T _x = 0;
//         K _y = 0;
//     public:
//         Point(T x, K y): _x(x), _y(y) {} // 构造函数
//         void setPoint(T x, K y) { // 设置点的坐标
//             _x = x;
//             _y = y;
//         }
//         T get_x(){
//             return _x; // 获取x坐标
//         }
//         K get_y(){
//             return _y; // 获取y坐标
//         }
// };

// int main(){
//     Point<float, char> p1(0.4, 'a'); // 创建一个Point对象，x为float类型，y为char类型`
//     cout << p1.get_x() << ", " << p1.get_y() << ")" << endl;
//     return 0;
// }

// class GameObject{
//     public:
//         GameObject(){
//             gameObjctCount++;
//         }
//     static int  getGameObjectCount(){
//             return gameObjctCount;
//         }
//     private:
//         static int gameObjctCount; // 静态成员变量，用于记录GameObject的数量
// };

// int GameObject::gameObjctCount = 0; // 静态成员变量的定义和初始化

// int main(){
//     GameObject g1; // 创建第一个GameObject对象
//     GameObject* g2;  // 创建指向GameObject的指针
//     cout << "Number of GameObjects1: " << g1.getGameObjectCount() << endl;
//     cout << "Number of GameObjects2: " << g2->getGameObjectCount() << endl;// 输出GameObject的数量
//     cout << "Number of GameObjects3: " << GameObject::getGameObjectCount() << endl; // 直接访问静态成员变量
//     return 0;
// }




// class Helper{
// public:
//     static void StaticFunction(){
//         cout << "I am a class function" << endl;
//     }
// private:
//     int x = 5;
// };

// int main(){
//     Helper::StaticFunction(); 
// }


// class Game {
// private:
//     static int totalGames;

// public:
//     Game() { totalGames++; }

//     static int getTotalGames() { return totalGames; }
// };

// int Game::totalGames = 0;

// int main() {
//     Game g1;
//     Game g2;
//     cout << g1.getTotalGames() << endl; // 输出当前游戏数量
//     cout << Game::getTotalGames() << endl;
//     return 0;
// }


// int main(){
//     int* x = new int(1);
//     //*x = 100;
//     cout << *x << endl; // 输出100
//     delete x; // 删除动态分配的内存
//     //x = nullptr; // 将指针设置为nullptr，防止悬空指针
//     return 0;
//     }
