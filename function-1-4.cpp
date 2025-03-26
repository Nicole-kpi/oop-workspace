#include "Person.h"

PersonList shallowCopyPersonList(PersonList pl) {
    PersonList scpl;

    scpl.people = pl.people;
    scpl.numPeople = scpl.numPeople;

    return scpl;
}