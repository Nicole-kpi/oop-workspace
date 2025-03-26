#include <iostream>
#include "Person.h"
using namespace std;

extern PersonList createPersonList(int n);

int main(){
    int n;
    cout << "Enter the number of person: ";
    cin >> n;

    PersonList pl = createPersonList(n);
    if (pl.people){
        for (int i = 0; i < n; i++){
            cout << "Person " << i + 1  << ":" << pl.people[i].name << ",Age: " << pl.people[i].age << endl;     
        }
        delete[] pl.people;
    }else{
        cout << "Invaild number of person." << endl;
    }
    return 0;
}