#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"
class Student : public Person {
private:
    int id;
public:
    Student(const std::string& name, int id);
    int get_id() const;
    void print() const override;
};
#endif