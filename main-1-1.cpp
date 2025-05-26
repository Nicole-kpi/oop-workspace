#include <iostream>
#include "Student.h"
#include "Instructor.h"
#include "Course.h"
int main() {
    Student* s = new Student("Seb", 1884670);
    Instructor* i = new Instructor("Dr.V");
    Course course(1234, "OOP");
    course.addPerson(s);
    course.addPerson(i);

    course.print();

    delete s;
    delete i;
    return 0;
}