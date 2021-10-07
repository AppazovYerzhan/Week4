#include <iostream>
#include <vector>
#include "SavingsAccount.h"
#include "CheckingAccount.h"
#include "TrustAccount.h"
#include "I_Printable.h"
#include "Account.h"

using namespace std;

int main() {
                                                        //Task 1.1

    I_Printable printable = I_Printable();
    printable.print(const Account& account);


    SavingsAccount savingsAccount = SavingsAccount();
    savingsAccount.setTenge(100);
    savingsAccount.deposit("tenge");
    savingsAccount.deposit("tenge");
    cout<<savingsAccount.getTenge()<<endl;


    CheckingAccount checkingAccount = CheckingAccount();
    checkingAccount.setEuros(1000);
    checkingAccount.withdraw(50, "euro");
    cout<<checkingAccount.getEuros()<<endl;

 TrustAccount trustAccount = TrustAccount();
trustAccount.setEuros(1000);
    trustAccount.deposit("euro");
    cout<<"Bonus: "<<trustAccount.getBonus()<<endl;
    cout<<"Balance in Euros: "<<trustAccount.getEuros()<<endl<<endl;
    trustAccount.deposit("euro");
    cout<<"Bonus: "<<trustAccount.getBonus()<<endl;
    cout<<"Balance in Euros: "<<trustAccount.getEuros()<<endl<<endl;

                                                        //Task 2.1
/*Functions deposit() and withdraw() are now pure virtual and daughter classes rae inherited these functions*/

        return 0;
}