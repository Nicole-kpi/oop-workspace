#include "Instructor.h"
#include <iostream>
using namespace std;

Instructor::Instructor(const std::string& name) : Person(name) {}
void Instructor::print() const {
    cout << "Name of Instructor: " << name << endl;
}