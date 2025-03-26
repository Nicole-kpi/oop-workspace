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

PersonList createPersonList(int n){
    PersonList pl;
    
    if (n <= 0){
        pl.people = nullptr;
        pl.numPeople = 0;

        return pl;
    }
    pl.people = new Person[n];
    pl.numPeople = n;

    for (int i =0; i < n; i++){
        pl.people[i].name = "Jane Doe";
        pl.people[i].age = 1;
    }
    return pl;
}