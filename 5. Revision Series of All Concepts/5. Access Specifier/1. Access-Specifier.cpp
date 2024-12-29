#include <bits/stdc++.h>

using namespace std;

//! Access Specifier:-

//* Private Specifier:- We can't access the private member variables and member functions directly.

//* Public Specifier:- We can easily access the public member variables and member functions directly.

//* Protected Specifier:- This concept will used in Inheritance. You can't Inherit the private member variables and member functions. But We want to inherit the private member variables and member functions so on that case we declare the "protected"  keyword instead of "private".
// Protected is behaving the same way as it is private.

//! NOTE:-
// You can provide public member functions (getters and setters) to access or modify private members.

// A friend function can access private members of the class.

// A friend class can access all private members of another class.

// Private members of the base class are not accessible directly by derived classes but can be accessed using protected members or public functions of the base class.