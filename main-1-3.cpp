#include <iostream>
#include "University.h"
#include "Student.h"
int main() {
    University u("MyUni", "Adelaide");
    u.addCourse(1234, "OOP");
    Student* s = new Student("Seb", 1884670);
    Course& c = u.get_courses().at(0);
    c.addPerson(s);
    Gradebook* g = u.get_gradebook();
    g->addGrade(1884670, 1234, "assign 1", 90);
    g->addGrade(1884670, 1234, "assign 2", 85);

    u.print();

    delete s;
    return 0;
}