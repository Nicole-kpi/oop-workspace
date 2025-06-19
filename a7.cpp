#include <iostream>
#include <string>

char* getArray() {
    char* newArray = new char[3]; // 动态分配一个字符数组
    newArray[0] = 'b';
    newArray[1] = 'e';
    newArray[2] = 'n';
    return newArray; // 返回指向动态分配数组的指针
}

int main(){
    char* newArray = getArray(); // 调用函数获取动态分配的数组
    *(newArray + 2) = 'e'; // 修改数组的第三个元素
    //方法同下// for (int i = 0; i < 3; i++) {
    //     std::cout << *(newArray + i);// 输出数组的内容
    // }
    //     std::cout << std::endl;
    //delete[] newArray; // 释放动态分配的内存 
    std::cout << std::string(newArray, 3) << std::endl; // 输出数组的内容
    return 0;
}