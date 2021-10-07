//
// Created by Professional on 06.10.2021.
//

#ifndef WEEK4_I_PRINTABLE_H
#define WEEK4_I_PRINTABLE_H
#include "SavingsAccount.h";
#include "Account.h";

class I_Printable {
public:
    void  print(const Account& account);
    I_Printable();
};


#endif //WEEK4_I_PRINTABLE_H
