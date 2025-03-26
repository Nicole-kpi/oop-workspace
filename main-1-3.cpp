#include <iostream>
#include "Person.h"
using namespace std;

extern PersonList deepCopyPersonList(PersonList pl);
extern PersonList createPersonList(int n);

int main(){
    int n;
    cout << "Enter the number of person: ";
    cin >> n;

    PersonList origin = createPersonList(n);
    PersonList copies = deepCopyPersonList(origin);

    cout << "Origin Personlist: " << endl;
    for (int i = 0; i < origin.numPeople; i++){
        cout << "Person " << i+1 << ":" << origin.people[i].name << ", Age: " << origin.people[i].age << endl;
    }
    
    cout << "Copies Personlist: " << endl;
    for (int i = 0; i < copies.numPeople; i++){
        cout << "Person " << i+1 << ":" << copies.people[i].name << ", Age: " << copies.people[i].age << endl;
    }
    
    delete[] origin.people;
    delete[] copies.people;

    return 0;
}