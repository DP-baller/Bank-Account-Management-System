#include "SavingAccount.h"
#include <iostream>

SavingAccount::SavingAccount(float amount, float rate)
{
    savingRate = rate;
    balance = amount;
}

void SavingAccount::setSavingRate(float rate)
{
    savingRate = rate;
}

float SavingAccount::getSavingRate()
{
    return savingRate;
}

void SavingAccount::transfer(CheckingAccount& checkingAcc, float amount)
{
    if (amount > balance)
    {
        throw std::invalid_argument("It cannot withdraw an amount greater than the balance. No changes were done to the balance.");
    }
    else
    {
        balance = balance - amount;
        checkingAcc.deposit(amount);
    }
}