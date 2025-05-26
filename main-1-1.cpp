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

    for (Person* p : course.get_persons()) {
        if (Student* sp = dynamic_cast<Student*>(p)) {
            std::cout << "Name of Student:" << sp->get_name() << std::endl;
            std::cout << "Id of Student:" << sp->get_id() << std::endl;
        } else if (Instructor* ip = dynamic_cast<Instructor*>(p)) {
            std::cout << "Name of Instructor:" << ip->get_name() << std::endl;
        }
    }

    delete s;
    delete i;
    return 0;
}
