#ifndef WEEK4_CHECKINGACCOUNT_H
#define WEEK4_CHECKINGACCOUNT_H


#include "Account.h"

class CheckingAccount : public Account {

private:
    double fee;
public:
    CheckingAccount(); //default constructor

    CheckingAccount(const string &name, double balance, double dollars, double euros, double tenge, double fee);      //constructor that fills all attributes

    void withdraw(int cash, string currency);   //function to get money from balance with specific fee

    void setFee(double fee);

    double getFee() const;

};
#endif //WEEK4_CHECKINGACCOUNT_H
