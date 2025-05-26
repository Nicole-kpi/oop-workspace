#include "Course.h"
#include <iostream>
using namespace std;

Course::Course(int id, const std::string& name) : id(id), name(name) {}

void Course::addPerson(Person* p) { 
    persons.push_back(p); 
    }

std::vector<Person*> Course::get_persons() const { 
    return persons; 
    }

int Course::get_id() const { 
    return id; 
    }
void Course::print() const {
    cout << "Course ID: " << id << "\nCourse Name: " << name << endl;
    cout << "Participants:" << endl;
    for (auto p : persons) {
        p->print();
    }
}
