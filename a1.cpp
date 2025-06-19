#include <iostream>

int main() {
    float a = 2.25f;
    float b = 1.25f;
    float* c = &a;
    (*c) += 1.0;
    std::cout << a << ',' << b << ',' << *c << std::endl;
    return 0;
}
// *c = a *c 只c解引用
// c = &a 表示c指向a的地址
// (*c) += 1.0 表示对c指向的值进行加1操作 即对a进行加1操作
// 输出结果：3.25,1.25,3.25