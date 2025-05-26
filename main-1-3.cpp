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

    // Only print grade information
    for (const Grade& gr : g->get_grades()) {
        std::cout << "Student ID:" << gr.get_student_id() << std::endl;
        std::cout << "Course ID:" << gr.get_course_id() << std::endl;
        std::cout << "Assignment:" << gr.get_assignment() << std::endl;
        std::cout << "Value:" << gr.get_value() << std::endl;
    }

    delete s;
    return 0;
}