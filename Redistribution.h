//
// Created by Professional on 06.10.2021.
//

#ifndef WEEK4_REDISTRIBUTION_H
#define WEEK4_REDISTRIBUTION_H


#include "Account.h"
#include <vector>
#include "SavingsAccount.h"

class Redistribution{
private:
    double tenge;

public:
    vector<SavingsAccount*>accounts;
    Redistribution(); //Default constructor
    Redistribution(double tenge);  //constructor that sets value specified by user
    void redistribute(double tenge); //function that redistributes 'tenge' by objects of Account
};


#endif //WEEK4_REDISTRIBUTION_H
