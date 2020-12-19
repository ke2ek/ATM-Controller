# Simple ATM Controller

## Build & Run

`bazel build //main:atm-main`

`bazel run //main:atm-main`


## Test

`bazel test //test:atm-test`


## Example

``` bash
Please Select Menu.
[0] Insert Card.
[1] See Balance.
[2] Deposit.
[3] Withdraw.
[4] Exit.
Enter number: 0
>> Hello, John Smith

Please Select Menu.
[0] Insert Card.
[1] See Balance.
[2] Deposit.
[3] Withdraw.
[4] Exit.
Enter number: 1
>> [John Smith] Balance: $100000

Please Select Menu.
[0] Insert Card.
[1] See Balance.
[2] Deposit.
[3] Withdraw.
[4] Exit.
Enter number: 2
How much? $328
>> [John Smith] $328 deposited.
>> [John Smith] Balance: $100328

Please Select Menu.
[0] Insert Card.
[1] See Balance.
[2] Deposit.
[3] Withdraw.
[4] Exit.
Enter number: 3
>> Thank you for visiting.

Please Select Menu.
[0] Insert Card.
[1] See Balance.
[2] Deposit.
[3] Withdraw.
[4] Exit.
Enter number: 4
```

