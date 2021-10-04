
#include "Account.h"

const string &Account::getName() const {
    return name;
}

double Account::getBalance() const {
    return balance;
}

double Account::getDollars() const {
    return dollars;
}

double Account::getEuros() const {
    return euros;
}

double Account::getTenge() const {
    return tenge;
}

void Account::setName(const string &name) {
    Account::name = name;
}

void Account::setBalance(double balance) {
    Account::balance = balance;
}

void Account::setDollars(double dollars) {
    Account::dollars = dollars;
}

 void Account::setEuros(double euros) {
    Account::euros = euros;
}

void Account::setTenge(double tenge) {
    Account::tenge = tenge;
}

Account::Account(): name("Unnamed Account"), balance(0), dollars(0), euros(0), tenge(0){}                            //default constructor that sets every attributes as "0"

Account::Account(const string &name, double balance, double dollars, double euros, double tenge) : name(name),          //constructor that sets according to values specified by user
                                                                                                   balance(balance),
                                                                                                   dollars(dollars),
                                                                                                   euros(euros),
                                                                                                   tenge(tenge) {}
  void withdraw(){
    cout<<"No actions has been done due to the location of the method in Account class";
}
  void deposit(){
    cout<<"No actions has been done due to the location of the method in Account class";
}