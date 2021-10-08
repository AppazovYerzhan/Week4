//
// Created by Professional on 06.10.2021.
//

#ifndef WEEK4_I_PRINTABLE_H
#define WEEK4_I_PRINTABLE_H
#include "SavingsAccount.h"

class I_Printable {
public:

    void print(const SavingsAccount& account); //function that accepts subclass of base class Account and print the deposit of user
    I_Printable(); //Default constructor
};


#endif //WEEK4_I_PRINTABLE_H
