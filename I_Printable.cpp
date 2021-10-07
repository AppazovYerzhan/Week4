//
// Created by Professional on 06.10.2021.
//

#include "I_Printable.h"
#include "Account.h"
void I_Printable::print(const Account& account) {
    cout<< "Your total balance: " + to_string(account.getBalance());

};