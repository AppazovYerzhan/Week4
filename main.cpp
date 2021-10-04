#include <iostream>
#include <vector>
#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"

using namespace std;

int main() {
                                                        //Task 1.1
//    Account acc  = Account();
//    cout<<acc.getName()<<" "<< acc.getBalance()<<endl;
//
//    SavingsAccount savingsAccount = SavingsAccount();
//    savingsAccount.setTenge(100);
//    savingsAccount.deposit("tenge");
//    savingsAccount.deposit("tenge");
//    cout<<savingsAccount.getTenge()<<endl;

                                                        //Task 1.2
    CheckingAccount checkingAccount = CheckingAccount();
    checkingAccount.setEuros(1000);
    checkingAccount.withdraw(50, "euro");
    cout<<checkingAccount.getEuros()<<endl;
        return 0;
}