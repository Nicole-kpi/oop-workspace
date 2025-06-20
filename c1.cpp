#include <iostream>

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


int main() {
    int arr[3] = {10, 20, 30};
    int *p = arr;
    std::cout << *(p + 2) << std::endl;
    return 0;
}