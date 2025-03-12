#include <iostream>

using namespace std;
extern int array_min(int integers[], int length);
extern int array_max(int integers[], int length);
extern int sum_min_max(int integers[], int length);

int main(){
    int array[] = {1,2,1,4,0,4,1,5};
    cout << sum_min_max(array,8) << endl;
    return 0;
}