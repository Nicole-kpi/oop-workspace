#include "Person.h"
using namespace std;

Person::Person(const string& name) {
    this->name = name;
}

string Person::get_name() const {
    return name;
}

Person::~Person() {
    cout << "Person " << name << " destroyed." << endl;
}

void Person::print() const {
    cout << "Name: " << name << endl;
}
