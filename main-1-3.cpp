#include <iostream>
#include "Person.h"
extern PersonList deepCopyPersonList(PersonList pl);
extern PersonList createPersonList(int n);

int main() {
    int n;
    std::cout << "Enter the number of person: ";
    std::cin >> n;

    if (n <= 0) {
        std::cerr << "Number of people must be greater than 0.\n";
        return 1;
    }

    PersonList original = createPersonList(n);

    if (n > 0) {
        original.people[0].name = "Jane Smith";
        original.people[0].age = 0;
    }

    PersonList copy = deepCopyPersonList(original);

    std::cout << "Origin PersonList:\n";
    for (int i = 0; i < original.numPeople; i++) {
        std::cout << "Person " << i + 1 << ": " << original.people[i].name << ", Age: " << original.people[i].age << '\n';
    }

    std::cout << "Copies PersonList:\n";
    for (int i = 0; i < copy.numPeople; i++) {
        std::cout << "Person " << i + 1 << ": " << copy.people[i].name << ", Age: " << copy.people[i].age << '\n';
    }

    delete[] original.people;
    delete[] copy.people;

    return 0;
}
