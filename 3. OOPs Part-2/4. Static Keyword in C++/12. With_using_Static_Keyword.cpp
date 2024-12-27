#include <bits/stdc++.h>

using namespace std;

//! NOTE:-

// Q)- Why we use static data members instead of normal data members?

// 1. Shared Across Instances: Static data members are shared among all instances of a class. This means that if one instance modifies a static member, the change is reflected across all instances. This is useful for data that should be common to all objects, such as a counter for the number of instances created.

// 2. Memory Efficiency: Since static members are shared, they can save memory when you have many instances of a class. Instead of each instance having its own copy of a member variable, there is only one copy of the static member.

// 3. Global Access: Static members can be accessed without creating an instance of the class. This can be useful for utility functions or constants that are relevant to the class but do not require an object to be instantiated.

// 4. Initialization Control: Static members can be initialized once and can maintain their state across multiple function calls or object instances. This is useful for maintaining configuration settings or state information that should persist.

// 5. Encapsulation of Related Functions: Static members can be used in conjunction with static methods to create utility classes that encapsulate related functions without needing to instantiate an object.

// 6. Class-level Data: When you need to maintain data that is relevant to the class as a whole rather than to individual instances, static data members are appropriate. For example, a class representing a bank account might have a static member to keep track of the total number of accounts.

class BankAccount
{
public:
    static int accountCount; // Static data member

    BankAccount()
    {
        accountCount++; // Increment the count when a new account is created
    }

    static int getAccountCount()
    {
        return accountCount; // Access static member
    }
};

// Definition of static member
int BankAccount::accountCount = 0;

int main()
{
    BankAccount a1;
    BankAccount a2;
    BankAccount a3;

    // Accessing static member without an instance
    cout << "Total accounts: " << BankAccount::getAccountCount() << endl; // Outputs: Total accounts: 3

    return 0;
}

//* In this example, accountCount is a static data member that keeps track of how many BankAccount instances have been created. It is shared across all instances, and you can access it without needing to create an instance of BankAccount.