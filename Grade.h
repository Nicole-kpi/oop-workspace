#ifndef GRADE_H
#define GRADE_H
#include <string>
#include <iostream>
class Grade {
private:
    int student_id;
    int course_id;
    std::string assignment;
    int value;
public:
    Grade(int sid, int cid, const std::string& assign, int val);
    int get_student_id() const;
    int get_course_id() const;
    std::string get_assignment() const;
    int get_value() const;
    void print() const;
};
#endif

