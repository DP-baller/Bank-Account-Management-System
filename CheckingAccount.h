#include "Account.h"

//#ifndef CHECKING_ACCOUNT_H
//#define CHECKING_ACCOUNT_H

class CheckingAccount : public Account
{
public:
    CheckingAccount(float);
    void withdraw(float);
};

//#endif