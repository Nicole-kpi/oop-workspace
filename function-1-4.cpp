#include "Person.h"


PersonList shallowCopyPersonList(PersonList pl) {
    PersonList scpl;

    scpl.people = pl.people;
    scpl.numPeople = scpl.numPeople;

    return scpl;
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
