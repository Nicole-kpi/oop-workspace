#include "Person.h"

PersonList deepCopyPersonList(PersonList pl){
    PersonList dcpl;

    if (pl.people == nullptr || pl.numPeople <= 0){
        dcpl.people = nullptr;
        dcpl.numPeople = 0;

        return dcpl;
    }

    dcpl.people = new Person[dcpl.numPeople];
    dcpl.numPeople = pl.numPeople;

    for (int i = 0; i < dcpl.numPeople; i++){
        dcpl.people[i].name = pl.people[i].name;
        dcpl.people[i].age = pl.people[i].age;
    }
    return dcpl;
}