#include <iostream>
#include <vector>
#include "Account.h"
#include "SavingsAccount.h"

using namespace std;

int main() {
    Account acc  = Account();
    cout<<acc.getName()<<" "<< acc.getBalance()<<endl;

    SavingsAccount savingsAccount = SavingsAccount();
    savingsAccount.setTenge(100);
    savingsAccount.deposit("tenge");
    savingsAccount.deposit("tenge");
    cout<<savingsAccount.getTenge()<<endl;


        return 0;
}