#include "Student.h"
#include <iostream>
using namespace std;

Student::Student(const std::string& name, int id) : Person(name), id(id) {}

int Student::get_id() const { 
    return id; 
    }

void Student::print() const {
    cout << "Name of Student: " << name << endl;
    cout << "ID of Student: " << id << endl
}