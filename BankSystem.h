#include <iostream>
#include <vector>
using namespace std;
#include "Client.h"

//#ifndef BANK_SYSTEM_H
//#define BANK_SYSTEM_H

class BankSystem
{
private:
    vector<string> log;
    Client* oneClient;

public:
    BankSystem(string i, string fn, string ln);
    void start();
    void AddCheckingDialog();
    void RemoveCheckingDialog();
    void DepositCheckingDialog();
    void WithdrawCheckingDialog();
    void AddSavingDialog();
    void RemoveSavingDialog();
    void DepositSavingDialog();
    void TransferDialog();
};

//#endif