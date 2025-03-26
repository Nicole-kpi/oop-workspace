#include "Person.h"

// PersonList createPersonList(int n){

//     if (n <= 0){
//         return {nullptr, 0};
//     }

//     PersonList* people = new Person[n];
//     for (int i = 0; i < n;i++){
//         people[i] = {"Jane Doe", 1};
//     }
//     return {people,n};
// }

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
