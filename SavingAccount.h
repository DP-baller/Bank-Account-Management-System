#include "Account.h"
#include "CheckingAccount.h"

//#ifndef SAVING_ACCOUNT_H
//#define SAVING_ACCOUNT_H

class SavingAccount : public Account
{
private:
    float savingRate;

public:
    SavingAccount(float, float);
    void setSavingRate(float);
    float getSavingRate();
    void transfer(CheckingAccount&, float);
};

//#endif