#include <iostream>
using namespace std;

class Account{
public:
    virtual void Withdraw(double amount){
        cout << "Withdraw::Account" << endl;
    }
    virtual ~Account(){cout << "Destructor::Account" << endl;}
};

class Savings: public Account{
public:
    virtual void Withdraw(double amount) override{
        cout << "Withdraw::Savings" << endl;
    }
    virtual ~Savings(){cout << "Destructor::Savings" << endl;}
};

class Checking: public Account{
public:
    virtual void Withdraw(double amount) override{
        cout << "Withdraw::Checking" << endl;
    }
    virtual ~Checking(){cout << "Destructor::Checking" << endl;}
};

class Trust: public Account{
public:
    virtual void Withdraw(double amount) override{
        cout << "Withdraw::Trust" << endl;
    }
    virtual ~Trust(){cout << "Destructor::Trust" << endl;}
};

void Print(Account &a){
    a.Withdraw(1000);
}

int main() {
    
    Account *p1 = new Account();
    Account *p2 = new Savings();
    Account *p3 = new Checking();
    Account *p4 = new Trust();

    Savings t;
    t.Withdraw(1000);
    Print(t);


    p1->Withdraw(1000);
    p2->Withdraw(1000);
    p3->Withdraw(1000);
    p4->Withdraw(1000);

    delete p1;
    delete p2;
    delete p3;
    delete p4;
    return 0;
}
