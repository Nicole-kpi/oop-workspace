#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <iostream>
class Person {
protected:
    std::string name;
public:
    Person(const std::string& name);
    std::string get_name() const;
    virtual void print() const;
    virtual ~Person();
};
#endif