#include <iostream>

int power(int& number){
    return number * number;
}

int main(){
    int x = 5;
    power(x);
    std::cout << x << std::endl; 
    return 0;
} //输出结果为5，因为power函数返回的是number的平方，但并没有修改x的值。x仍然是5，所以输出结果是5。

// //修改使其输出为25
// #include <iostream>
// int power(int& number){
//     number = number * number; // 修改number的值为其平方
//     return number;
// }
// int main(){
//     int x = 5;
//     x = power(x);
//     std::cout << x << std::endl; // 输出x的值，此时x已经被修改为25
//     return 0;
// } //输出结果为25，因为power函数修改了number的值为其平方，即25。x的值也被修改为25，所以输出结果是25。

// // 修改使其输出为25
// #include <iostream>
// void power(int& number){
//     number = number * number; // 修改number的值为其平方
// }
// int main(){
//     int x = 5;
//     power(x); // 调用power函数，修改x的值
//     std::cout << x << std::endl; // 输出x的值，此时x已经被修改为25
//     return 0;
// } //输出结果为25，因为power函数修改了number的值为其平方，即25。x的值也被修改为25，所以输出结果是25。


// #include <iostream>

// void power(int* numebr){
//     *numebr = (*numebr) * (*numebr); // 修改numebr指向的值为其平方
// }

// int main(){
//     int x = 5;
//     power(&x); // 传递x的地址给power函数
//     std::cout << x << std::endl; // 输出x的值，此时x已经被修改为25
//     return 0;
// }