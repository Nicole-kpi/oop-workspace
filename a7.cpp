#include <iostream>
#include <string>
using namespace std;

// char* getArray() {
//     char* newArray = new char[3]; // 动态分配一个字符数组
//     newArray[0] = 'b';
//     newArray[1] = 'e';
//     newArray[2] = 'n';
//     return newArray; // 返回指向动态分配数组的指针
// }

// int main(){
//     char* newArray = getArray(); // 调用函数获取动态分配的数组
//     *(newArray + 2) = 'e'; // 修改数组的第三个元素
//     //方法同下// for (int i = 0; i < 3; i++) {
//     //     std::cout << *(newArray + i);// 输出数组的内容
//     // }
//     //     std::cout << std::endl;
//     //delete[] newArray; // 释放动态分配的内存 
//     std::cout << std::string(newArray, 3) << std::endl; // 输出数组的内容
//     return 0;
// }

// char* getArray() {
//     char* newArray = new char[4]; // 动态分配一个字符数组
//     newArray[0] = 'b';
//     newArray[1] = 'e';
//     newArray[2] = 'n';
//     newArray[3] = 'y'; // 添加一个新的字符
//     return newArray; // 返回指向动态分配数组的指针
// }
// // 注意：上面的代码有错误，不能直接返回局部变量的地址
// // 因为局部变量在函数结束后会被销毁，返回的指针将指向无效内存。
// // 正确的做法是使用动态内存分配（如new）来创建数组，并在使用完毕后释放内存。
// // 下面是一个正确的示例，使用动态内存分配来创建数组并返回指针
// // char* getArray() {
// //     char* newArray = new char[4]; // 动态分配一个字符数组
// //     newArray[0] = 'b';
//     // newArray[1] = 'e';
//     // newArray[2] = 'n';
//     // newArray[3] = 'y'; // 添加一个新的字符
//     // return newArray; // 返回指向动态分配数组的指针
// // }

// int main(){
//     char* newArray = getArray(); // 调用函数获取动态分配的数组
//     cout << std::string(newArray, 4) << std::endl; // 输出数组的内容
//     *(newArray + 3) = 'e'; // 修改数组的第四个元素
//     //newArray[3] = 'e'; // 修改数组的第四个元素
//     cout << std::string(newArray, 4) << std::endl; // 输出数组的内容
//     delete[] newArray; // 释放动态分配的内存
//     return 0;
// }