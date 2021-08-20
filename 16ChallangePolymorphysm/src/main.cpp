#include <iostream>
#include <vector>
#include "SavingAccount.h"
#include "CheckingAccount.h"
#include "TrustAccount.h"
#include "I_Account.h"
#include "AccountUlti.h"

using namespace std;

int main() {
    cout.precision(2);
    cout << fixed;

    Account *SavAcc = new SavingAccount;
    SavAcc->Deposit(1000);

    cout << *SavAcc;

    //Checking Accounts
    vector <Account*> ChckAccounts;
    ChckAccounts.push_back(new CheckingAccount);
    ChckAccounts.push_back(new CheckingAccount {"Larry"});
    ChckAccounts.push_back(new CheckingAccount {"Moe", 2000});
    ChckAccounts.push_back(new CheckingAccount {"Curly", 5000});

    Display(ChckAccounts);
    Deposit(ChckAccounts, 1000);
    Withdraw(ChckAccounts, 2000);

    //Trust Accounts
    vector <Account*> TrstAccounts;
    TrstAccounts.push_back(new TrustAccount {});
    TrstAccounts.push_back(new TrustAccount {"Larry"});
    TrstAccounts.push_back(new TrustAccount {"Moe", 2000});
    TrstAccounts.push_back(new TrustAccount {"Curly", 5000, 10});

    Display(TrstAccounts);
    Deposit(TrstAccounts, 1000);
    Display(TrstAccounts);
    Withdraw(TrstAccounts, 1000);


}

