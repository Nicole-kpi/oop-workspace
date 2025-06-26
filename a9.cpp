#include <iostream>

int modify(int* array, int i, int val){
    if (i > 0){
        *(array + (i - 1)) = val; // 修改数组的第i个元素
        //等价于 array[i - 1] = val; // 也可以使用这种方式修改数组的第i个元素
        //array 是一个指向整数的指针，指向数组的首地址 array = &nums[0];
        //array + (i - 1) 是指向数组第i个元素的指针 等价于 nums[i - 1]；
        //*(array + (i - 1)) 是对指针解引用，获取第i个元素的值
        return i;
    }
    return -1; // 如果i小于等于0，返回-1表示错误
}

int main(){
    int nums[4] = {2, 4, 6, 8}; // 定义一个整数数组
    modify(nums, 0, 5);
    modify(nums, 1, 9);
    std::cout << nums[0] << ',' << nums[1] << ',' << nums[2] << ',' << nums[3] << std::endl; // 输出数组的内容
}