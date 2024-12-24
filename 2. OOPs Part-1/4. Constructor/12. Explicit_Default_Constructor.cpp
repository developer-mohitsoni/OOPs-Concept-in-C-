#include <bits/stdc++.h>

using namespace std;

//* Explicit Default Constructor in Class

class Student
{
private:
    int roll_no;
    string name;

public:
    // Explicit Default Constructor
    Student()
    {
        cout << "Enter the Roll Number" << endl; // Asking for input
        cin >> roll_no;

        cout << "Enter the Name" << endl; // Asking for input
        cin >> name;
    }
    void display()
    {
        cout << "Roll Number: " << roll_no << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{
    //! NOTE:- You can easily access the private data members of this class directly by using the Explicit Default Constructor

    Student s1; // Explicit Default Constructor called
    s1.display();

    return 0;
}