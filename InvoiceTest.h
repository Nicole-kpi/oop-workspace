#ifndef INVOICE_H
#define INVOICE_H

#include <iostream>
#include "Invoice.h"

class InvoiceTest {
public:
    void runTests() {
        testAddServiceCost();
        // Add other test methods here
    }

private:
    void testAddServiceCost() {
        {
            Invoice invoice("ABCD");
            invoice.addServiceCost(10);
            if (invoice.getDollarsOwed() != 10) {
                std::cout << "Test 1 failed!" << std::endl;
            }
        }

        {
            Invoice invoice("ABCD");
            invoice.addServiceCost(1);
            if (invoice.getDollarsOwed() != 1) {
                std::cout << "Test 2 failed!" << std::endl;
            }
        }

         {
            Invoice invoice("ABCD");
            invoice.addServiceCost(0);
            if (invoice.getDollarsOwed() != 0) {
                std::cout << "Test 3 failed!" << std::endl;
            }
        }
    }

     void testMultipleAdditions() {
        Invoice invoice("ABCD");
        invoice.addServiceCost(10);
        invoice.addServiceCost(15);
        if (invoice.getDollarsOwed() != 25)
            std::cout << "Test 4 failed!" << std::endl;
        else
            std::cout << "Test 4 passed." << std::endl;
    }
};
#endif