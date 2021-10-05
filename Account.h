#ifndef WEEK4_ACCOUNT_H
#define WEEK4_ACCOUNT_H
#include <string>
#include <iostream>
using namespace std;

class Account {

string name;
double balance;
double dollars;
double euros;
double tenge;

public:
    Account();  //default constructor

    Account(const string &name, double balance, double dollars, double euros, double tenge);       //constructor that sets values specified by user

     virtual void withdraw(int cash, string currency) = 0;
     virtual void deposit(string currency) = 0;

    const string &getName() const;

    double getBalance() const;

    double getDollars() const;

    double getEuros() const;

    double getTenge() const;

    void setName(const string &name);

    void setBalance(double balance);

    void setDollars(double dollars);

    void setEuros(double euros);

    void setTenge(double tenge);

};


#endif //WEEK4_ACCOUNT_H
