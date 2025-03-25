#ifndef ADD_H
#define ADD_H

#include <string>
struct Person {
    std::string name;
    int age;
};

struct PersonList {
    Person* people;
    int numPeople;
};

#endif