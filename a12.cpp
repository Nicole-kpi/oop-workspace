// #include <iostream>

// class Data {
// protected:
// public:
//     float value = 0.25;
//     float setValue(){ this->value = value; return value; };
// };

// int main(){
//     Data d;
//     float result = d.setValue(5.3);
//     std::cout << result << std::endl;
//     return 0;
// }

// #include <iostream>

// class Data {
// protected:
// public:
//     float value = 0.25;
//     float setValue(float value) { 
//         float temp = this->value;
//         this->value = value; 
//         return temp; 
//     };
// };

// int main(){
//     Data d;
//     float value = d.setValue(5.3);
//     std::cout << value << std::endl; // 输出设置的新值
//     return 0;
// }

// #include <iostream>

// class Data{
// protected:
//     float value = 0.25; // 默认值为0.25
// public:
//     float setValue(float newValue) { 
//         float oldValue = this->value; // 保存旧值
//         this->value = newValue; // 设置新值
//         return oldValue; // 返回旧值
//     };
// };

// int main(){
//     Data d;
//     float oldValue = d.setValue(5.3); // 设置新值为5.3，并获取旧值
//     std::cout << "Old value: " << oldValue << std::endl; // 输出旧值
//     std::cout << "New value: " << d.value << std::endl; // 输出新值
//     return 0;
// }

// #include <iostream>

// class Data {
// protected:
//     float value = 0.25; // 默认值为0.25
// public:
//     Data() :value(0.3) {} // 构造函数，初始化value为0.3
//     void setValue(float newValue) { 
//         this->value = newValue; // 设置新值
//     };
// };

// class SecureData : protected Data {
// public:
//     SecureData() { value = 0.2; }; // 构造函数，初始化value为0.2
//     float getValue() {
//         return value; // 返回value的值
//     }
// };

// int main() {
//     SecureData d; // 创建SecureData对象
//     std::cout << "Value: " << d.getValue() << std::endl; // 输出当前值
//     return 0;
// }


#include <iostream>

class Data{
protected:
    float value = 0.25; // 默认值为0.25
public:
    Data() : value(1.3) {} // 构造函数，初始化value为1.3
    void setValue(float newValue) { 
        this->value = newValue; // 设置新值
    };
    float getValue(){ // 获取当前值
        return value;
    }
};

class SecureData : protected Data {
public:
    SecureData() {} // 构造函数
    int getValue() { // 获取当前值
        return Data::getValue(); // 调用基类的getValue方法
    };
};

int main(){
    SecureData d;
    std::cout << d.getValue() << std::endl; // 输出当前值
    return 0;
}