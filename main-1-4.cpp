#include <iostream>
#include "Person.h"
using namespace std;

extern PersonList createPersonList(int n);
extern PersonList shallowCopyPersonList(PersonList pl);

int main() {
    int n;
    cout << "Enter number of people: ";
    cin >> n;

    if (n <= 0) {
        cerr << "Number of people must be greater than 0.\n";
        return 1;
    }

    PersonList origin = createPersonList(n);
    PersonList copy = shallowCopyPersonList(origin);

    cout << "Original list: " << endl;
    for (int i = 0; i < origin.numPeople; i++) {
        cout << origin.people[i].name << ", " << origin.people[i].age << endl;
    }

    cout << "Copied list (shallow copy): " << endl;
    for (int i = 0; i < copy.numPeople; i++) {
        cout << copy.people[i].name << ", " << copy.people[i].age << endl;
    }

    delete[] origin.people;

    return 0;
}