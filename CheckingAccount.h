#ifndef WEEK4_CHECKINGACCOUNT_H
#define WEEK4_CHECKINGACCOUNT_H


#include "Account.h"

class CheckingAccount : public Account {

private:
    double fee;
public:
    CheckingAccount(); //default constructor

    void withdraw(int cash, string currency);   //function to get money from balance with specific fee

    void deposit(string currency);

    void setFee(double fee);

    double getFee() const;

};
#endif //WEEK4_CHECKINGACCOUNT_H
