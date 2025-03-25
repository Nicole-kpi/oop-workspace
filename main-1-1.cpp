#include <iostream>
#include "Person.h"
using namespace std;

extern Person* createPersonArray(int n);

int main(){
    int n;
    cout << "Enter the number of person: ";
    cin >> n;

    Person* people = createPersonArray(n);

    if (people){
        for (int i = 0; i < n; i++){
            cout << "Person" << i+1 << ":" << people[i].name << ", Age: " << people[i].age << endl;
        }
        delete[] people;
    }else{
        cout << "Invaild number of person." << endl;
    }
    return 0;
}