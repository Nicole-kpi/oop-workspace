#include <iostream>
#include "Addition.h"

class EquivalenceTests {
public:
    void runTests() {
        testPositiveIntegers();
        testNegativeIntegers();
        // Add other tests here
    }

private:
    void testPositiveIntegers() {
        Addition addition;
        if (addition.add(5, 10) != 15) {
            std::cout << "Test 1 failed!" << std::endl;
        }
    }

    void testNegativeIntegers() {
        Addition addition;
        if (addition.add(-4, -5) != -9) {
            std::cout << "Test 2 failed!" << std::endl;
        }
    }

     void testZeroes() {
        Addition addition;
        if (addition.add(0, 0) != 0)
            std::cout << "Test Zeroes Failed!" << std::endl;
        else
            std::cout << "Test Zeroes Passed." << std::endl;
    }

    void testSpecialCases() {
        Addition addition;
        if (addition.add(1, -1) != 0)
            std::cout << "Test Special Cases Failed!" << std::endl;
        else
            std::cout << "Test Special Cases Passed." << std::endl;
    }
       void testMixedIntegers() {
        Addition addition;
        if (addition.add(10, -5) != 5)
            std::cout << "Test Mixed Integers Failed!" << std::endl;
        else
            std::cout << "Test Mixed Integers Passed." << std::endl;
    }
};
#endif