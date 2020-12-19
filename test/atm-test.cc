#include "gtest/gtest.h"
#include "main/controller.h"

TEST(AtmTest, FunctionCall) {
    AccountMap* am = new AccountMap();
    Card* card = new Card(5678123487654321, 7777);
    Account* account = new Account("John Smith", 100000);
    am->add(card, account);

    EXPECT_EQ(am->insertCard(card), account);

    seeBalance(account);
    deposit(account, 970817);
    seeBalance(account);
    deposit(account, 270);

    EXPECT_EQ(account->getBalance(), 1071087);

    withdraw(&account);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

