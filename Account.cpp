#include "Account.h"
#include <iostream>

float Account::getBalance()
{
    return balance;
}

void Account::deposit(float amount)
{
    balance = balance + amount;
}