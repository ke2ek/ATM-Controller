#include "account.h"

Account::Account(string name, int balance) : owner(name), balance(balance) {}
void Account::setBalance(int balance) { this->balance = balance; }
int Account::getBalance() const { return balance; }
string Account::getOwner() const { return owner; }

Card::Card(long long card, int pin): cardNumber(card), pinNumber(pin) {}
long long Card::getCardNumber() const { return cardNumber; }
int Card::getPinNumber() const { return pinNumber; }

