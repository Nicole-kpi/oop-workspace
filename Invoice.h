#ifndef INVOICE_H
#define INVOICE_H

#include <string>
using namespace std;

class Invoice {
private:
    string invoiceId;
    int dollarsOwed;

public:
    Invoice(std::string id);
    void addServiceCost(int costDollars);
    int getDollarsOwed() const;
    std::string getInvoiceId() const;
};

#endif