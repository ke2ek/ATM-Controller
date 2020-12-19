#include "main/controller.h"

AccountMap::AccountMap() {}

AccountMap::AccountMap(vector<Card*> cards, vector<Account*> accounts) {
    for (int i = 0; i < cards.size(); i++) {
        m[cards[i]->getCardNumber()] = accounts[i];
    }
}

void AccountMap::add(Card* card, Account* account) {
    m[card->getCardNumber()] = account;
}

Account* AccountMap::insertCard(Card* card) {
    Account* account = nullptr;
    if (checkPinNumber(card->getPinNumber())) {
        account = selectAccount(card->getCardNumber());
        if (account != nullptr) {
            cout << ">> Hello, " << account->getOwner() << endl;
        }
    } else {
        printError("Invalid PIN number.");
    }
    return account;
}

bool AccountMap::checkPinNumber(int pin) {
    return pin >= 1000 and pin <= 9999;
}

Account* AccountMap::selectAccount(long long cardNumber) {
    if (m.find(cardNumber) == m.end()) {
        printError("Invalid card number.");
        return nullptr;
    }
    return m[cardNumber];
}


void seeBalance(Account* account) {
    if (account) {
        cout << ">> [" << account->getOwner() << "] ";
        cout << "Balance: $" << account->getBalance() << endl;
        return;
    }
    printError("Invalid account. Please insert your card first.");
}

void deposit(Account* account, int added) {
    if (account) {
        int balance = account->getBalance();
        account->setBalance(balance + added);
        cout << ">> [" << account->getOwner() << "] ";
        cout << "$" << added << " deposited." << endl;
        seeBalance(account);
        return;
    }
    printError("Invalid account. Please insert your card first.");
}

void withdraw(Account** account) {
    if (*account) {
        *account = nullptr;
        cout << ">> Thank you for visiting." << endl;
        return;
    }
    printError("Invalid account. Please insert your card first.");
}

void printError(string errMsg) {
    cout << errMsg << endl;
}

void printMenu() {
    cout << endl << "Please Select Menu." << endl;
    cout << "[0] Insert Card." << endl;
    cout << "[1] See Balance." << endl;
    cout << "[2] Deposit." << endl;
    cout << "[3] Withdraw." << endl;
    cout << "[4] Exit." << endl;
    cout << "Enter number: ";
}

