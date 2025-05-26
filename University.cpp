#include "University.h"
#include <iostream>
using namespace std;

University::University(const std::string& name, const std::string& location)
    : name(name), location(location) {
    gradebook = new Gradebook();
}
void University::addCourse(int id, const std::string& name) {
    courses.emplace_back(id, name);
}
Gradebook* University::get_gradebook() const { 
    return gradebook; 
    }

std::vector<Course> University::get_courses() const { 
    return courses; 
    }

void University::print() const {
    cout << "University: " << name << "\nLocation: " << location << endl;
    cout << "Courses:" << endl;
    for (const auto& c : courses) {
        c.print();
        cout << "====" << endl;
    }
    cout << "Gradebook:" << endl;
    gradebook->print();
}
University::~University() { 
    delete gradebook; 
    cout << "University destroyed." << endl;}
