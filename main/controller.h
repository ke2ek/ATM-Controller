#include "main/account.h"
#include <iostream>
#include <vector>
#include <map>

class AccountMap {
private:
    map<long long, Account*> m;

public:
    AccountMap();
    AccountMap(vector<Card*> cards, vector<Account*> accounts);

    void add(Card* card, Account* account);
    Account* insertCard(Card* card);
    bool checkPinNumber(int pin);
    Account* selectAccount(long long cardNumber);
};


void seeBalance(Account* account);
void deposit(Account* account, int added);
void withdraw(Account** account);

void printError(string errMsg);
void printMenu();

