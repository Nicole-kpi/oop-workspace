#include <iostream>

class Data
{
protected:
    float value = 0.25;               // (A) 类内初始化：value 初始 0.25

public:
    Data() { value = 0.3; }           // (B) Data 构造时把 value 设为 0.3

    virtual float getValue() {        // (C) 虚函数：返回当前 value
        return value;
    }

    ~Data() {                         // (D) **非** virtual 析构函数
        std::cout << value << ',';    // 在析构时打印 value 再逗号
    }
};

class SecureData : public Data
{
public:
    SecureData() { value = 0.5; }     // (E) SecureData 构造时把 value 设为 0.5
    ~SecureData() {                    // (F) 派生析构
        std::cout << 'S' << ',';      // 本意：析构时打印 'S,'
    }
};

class FixedData : public SecureData
{
public:
    FixedData() {}                    // (G) FixedData 构造不改 value
    float getValue() override {       // (H) 重写虚函数：返回 value+1
        return value + 1;
    }
    ~FixedData() {                     // (I) 最派生析构
        std::cout << '1' << ',';      // 本意：析构时打印 '1,'
    }
};

int main()
{
    Data* d = new FixedData();        // (J) “向上转换”：用基类指针托管派生对象
    delete d;                          // (K) 释放——会触发析构链
    std::cout << std::endl;           // (L) 换行
    return 0;
}
