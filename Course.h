#ifndef COURSE_H
#define COURSE_H
#include <vector>
#include <string>
#include "Person.h"
class Course {
private:
    int id;
    std::string name;
    std::vector<Person*> persons;
public:
    Course(int id, const std::string& name);
    void addPerson(Person* p);
    std::vector<Person*> get_persons() const;
    int get_id() const;
    void print() const;
};
#endif