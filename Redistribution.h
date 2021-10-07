//
// Created by Professional on 06.10.2021.
//

#ifndef WEEK4_REDISTRIBUTION_H
#define WEEK4_REDISTRIBUTION_H


#include "Account.h"

class Redistribution : public Account{
private:
    double tenge;
public:
    Redistribution(); //Default constructor
    Redistribution(double tenge);  //constructor that sets value specified by user
    void redistribute(double tenge);
};


#endif //WEEK4_REDISTRIBUTION_H
