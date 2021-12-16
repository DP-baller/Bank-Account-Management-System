#include "CheckingAccount.h"
#include <iostream>
using namespace std;

CheckingAccount::CheckingAccount(float amount)
{
    balance = amount;
}

void CheckingAccount::withdraw(float amount)
{
    if (amount > balance)
        cout << "It cannot withdraw an amount greater than the balance. No changes were done to the balance." << endl;
    else
        balance -= amount;
}