#include <string>
using namespace std;

class Account {
private:
    string owner;
    int balance;

public:
    Account(string name, int balance = 0);
    void setBalance(int balance);
    int getBalance() const;
    string getOwner() const;
};

class Card {
private:
    long long cardNumber;
    int pinNumber;

public:
    Card(long long card, int pin);
    long long getCardNumber() const;
    int getPinNumber() const;
};


