#include <string>
#include "CheckingAccount.h"
#include "SavingAccount.h"
using namespace std;

//#ifndef CLIENT_H
//#define CLIENT_H

class Client
{
private:
    int id;
    string firstName;
    string lastName;

public:
    CheckingAccount* checking;
    SavingAccount* saving;

    void setName(string, string);
    string getFirstName();
    string getLastName();
    void setID(int);
    int getID();
    //constructor
    Client(string, string, string);
};

//#endif