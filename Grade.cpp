#include "Grade.h"
#include <iostream>
using namespace std;

Grade::Grade(int sid, int cid, const std::string& assign, int val)
    : student_id(sid), course_id(cid), assignment(assign), value(val) {}
int Grade::get_student_id() const { 
    return student_id; 
    }

int Grade::get_course_id() const { 
    return course_id; 
    }

std::string Grade::get_assignment() const { 
    return assignment; 
    }

int Grade::get_value() const { 
    return value; 
    }
    
void Grade::print() const {
    cout << "Student ID: " << student_id << "\nCourse ID: " << course_id << "\nAssignment: " << assignment << "\nValue: " << value << endl;
}
