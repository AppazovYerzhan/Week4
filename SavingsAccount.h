#ifndef WEEK4_SAVINGSACCOUNT_H
#define WEEK4_SAVINGSACCOUNT_H

#include "Account.h"

class SavingsAccount : public Account{
private:
    int interestRateForDollars;
    int interestRateForEuros;
    int interestRateForTenge;
public:
    void setInterestRateForDollars(int interestRateForDollars);
    void setInterestRateForEuros(int interestRateForEuros);
    void setInterestRateForTenge(int interestRateForTenge);

    int getInterestRateForDollars() const;
    int getInterestRateForEuros() const;
    int getInterestRateForTenge() const;

    SavingsAccount();

    void deposit(string currency);                  //function that increases money by some interest
    void withdraw(int cash, string currency);
};


#endif //WEEK4_SAVINGSACCOUNT_H
