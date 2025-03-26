#include <iostream>
#include "Person.h"

PersonList createPersonList(int n);
PersonList shallowCopyPersonList(PersonList pl);

int main() {
    int n;
    std::cout << "Enter number of people: ";
    std::cin >> n;

    if (n <= 0) {
        std::cerr << "Number of people must be greater than 0.\n";
        return 1;
    }

    PersonList original = createPersonList(n);
    PersonList copy = shallowCopyPersonList(original);

    std::cout << "Original list:" << std::endl;
    for (int i = 0; i < original.numPeople; i++) {
        std::cout << original.people[i].name << ", " << original.people[i].age << '\n';
    }

    std::cout << "Copied list (shallow copy): " << std::endl;
    for (int i = 0; i < copy.numPeople; i++) {
        std::cout << copy.people[i].name << ", " << copy.people[i].age << '\n';
    }

    delete[] original.people;

    return 0;
}
