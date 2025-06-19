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
//     b.A::say_hi(); // 输出 "Hi! I am B"

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

// class A{
//     public:
//         void foo(){
//             cout << "This is A/n";
//         }
// };

// class B: public A{
//     public:
//         void foo(){
//             cout << "This is B/n";
//         }
// };

// class C: public B{
//     public:
//         void foo(){
//             cout << "This is C/n";
//         }
// };

// void test(A* a){
//     a->foo(); // 调用foo函数，实际调用的是C类的foo函数
// }

// int main(){
//     A* a = new C(); // 创建C的对象，但指针类型为A
//     a->foo(); // 调用A类的foo函数，实际调用的是C类的foo函数
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

class GameObject{
    public:
        GameObject(){
            gameObjctCount++;
        }
        int getGameObjectCount(){
            return gameObjctCount;
        }
    private:
        static int gameObjctCount; // 静态成员变量，用于记录GameObject的数量
};

int GameObject::gameObjctCount = 0; // 静态成员变量的定义和初始化

int main(){
    GameObject g1; // 创建第一个GameObject对象
    GameObject* g2; // 创建指向GameObject的指针
    cout << "Number of GameObjects: " << g1.getGameObjectCount() << endl; // 输出GameObject的数量
    return 0;
}