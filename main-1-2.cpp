#include <iostream>
#include "Gradebook.h"
int main() {
    Gradebook gb;
    gb.addGrade(1884670, 1234, "assign 1", 90);
    gb.print();
    return 0;
}