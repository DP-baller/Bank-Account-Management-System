#pragma once
//#ifndef ACCOUNT_H
//#define ACCOUNT_H

class Account
{
protected:
    float balance;

public:
    float getBalance();
    virtual void deposit(float);
};

//#endif