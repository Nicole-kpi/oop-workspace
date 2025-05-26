#include "Person.h"
using namespace std;

Person::Person(const string& name) {
    this->name = name;
}

string Person::get_name() const {
    return name;
}

void Person::print() const {
    cout << "Name: " << name << endl;
}