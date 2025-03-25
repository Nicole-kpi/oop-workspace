#include <iostream>
#include "Person.h"
using namespace std;

extern Person* createPersonArray(int n);

int main(){
    int n;
    cout << "Enter the number of person: ";
    cin >> n;

    Person* people = createPersonArray(n);

    if (peopel){
        for (int i = 0; i < n; i++){
            cout << "Person" << i+1 << ":" << people[i].name << ", Age: " << people[i].age << std;
        }
        delete[] people;
    }else{
        cout << "Invaild number of person." << std;
    }
    return 0;
}