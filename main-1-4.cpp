#include <iostream>
#include "Person.h"
extern PersonList shallowCopyPersonList(PersonList pl);
extern PersonList createPersonList(int n);

int main() {
    int n;
    std::cout << "Enter number of people: ";
    std::cin >> n;

    if (n <= 0) {
        std::cerr << "Number of people must be greater than 0.\n";
        return 1;
    }

    // 创建并初始化原始列表
    PersonList original = createPersonList(n);

    // 浅拷贝
    PersonList copy = shallowCopyPersonList(original);

    // 输出原始列表
    std::cout << "Original list:" << std::endl;
    for (int i = 0; i < original.numPeople; i++) {
        std::cout << "name: " << original.people[i].name << ", age: " << original.people[i].age << '\n';
    }

    // 输出浅拷贝的列表
    std::cout << "Copied list (shallow copy): " << std::endl;
    for (int i = 0; i < copy.numPeople; i++) {
        std::cout << "name: " << copy.people[i].name << ", age: " << copy.people[i].age << '\n';
    }

    // 删除原始列表的内存
    delete[] original.people;

    return 0;
}
