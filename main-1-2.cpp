#include <iostream>

extern int is_identity(int arary[10][10]);

using namespace std;

//int main(){
//int identityMatrix[10][10] = {0};
//for (int i = 0; i < 10; i++){
//    idnetityMatrix[i][i] = 1;
//}

int main(){
    int identityMatrix[10][10]{
        {0,4,1,5,1,0,1,0,1,1},
        {1,2,0,8,1,0,3,4,5,6},
        {1,2,1,4,3,5,7,8,8,4},
        {0,1,2,5,4,7,8,9,2,4},
        {0,4,2,2,1,0,1,0,1,0},
        {1,0,1,0,0,0,0,0,0,0},
        {1,2,2,7,1,1,1,1,1,3},
        {0,1,0,3,4,0,0,2,4,5},
        {0,4,1,5,5,5,7,7,3,5},
        {1,2,0,8,1,1,1,1,1,1}
    };

cout << "Is idnetity matrix: " << is_identity(identityMatrix) << endl;
}