#include "main/controller.h"

AccountMap* gAccountMap; 
vector<Card*> cards;
vector<Account*> accounts;

Card* card = nullptr;

void init() {
    card = new Card(5678123487654321, 7777);
    cards.push_back(card);
    accounts.push_back(new Account("John Smith", 100000));
    gAccountMap = new AccountMap(cards, accounts);
}

int main() {
    Account *account = nullptr;
    init();
    while (1) {
        printMenu();
        int number;
        cin >> number;
        if (number == 0) {
            if (account != nullptr) {
                printError("Already inserted.");
                continue;
            }
            account = gAccountMap->insertCard(card);
        } else if (number == 1) { seeBalance(account);
        } else if (number == 2) {
            int added;
            cout << "How much? $";
            cin >> added;
            deposit(account, added);
        } else if (number == 3) { withdraw(&account);
        } else if (number == 4) { break;
        } else { printError("Invalid number."); }
    }
    return 0;
}
