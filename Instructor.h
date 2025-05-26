#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H
#include "Person.h"
class Instructor : public Person {
public:
    Instructor(const std::string& name);
    void print() const override;
};
#endif
