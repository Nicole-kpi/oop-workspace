#include <iostream>
#include <string>

// int main(){
//     char name[] = "mike";
//     char* nameCoopy = name; // nameCopy指向name的首地址
//     nameCoopy[3] = 'y'; // 修改nameCoopy指向的内容，即修改name数组的内容
//     std::cout << std::string(nameCoopy) << std::endl;
//     return 0;
// }

int main(){
    char name[] = "mike";
    char* nameCopy;
    nameCopy = name;
    nameCopy[3] = 'y'; // 修改nameCopy指向的内容，即修改name数组的内容
    for (int i = 0; i < 4; i++) {
        std::cout << nameCopy[i]; // 输出nameCopy指向的内容
    }
    std::cout << std::endl;
    return 0;
}