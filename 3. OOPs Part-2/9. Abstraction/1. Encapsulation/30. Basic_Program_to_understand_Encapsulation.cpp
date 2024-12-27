#include <bits/stdc++.h>

using namespace std;

//! Basic to Encapsulation

class Student
{
private:
    string gf;

public:
    int age;
    int *id;

    // Parameterized Constructor

    Student(int age, int id)
    {
        this->age = age;
        this->id = new int(id);

        cout << age << " " << id << endl;
        cout << "Parameterized Constructor Called" << endl;
    }

    // Setter Method
    void setGfName(string gf)
    {
        this->gf = gf;
    }

    // Getter Method
    // Here later we, protect integrity, authentication:- who can access my GF name
    string getGfName() const
    {
        return gf;
    }

    // Destructor
    ~Student()
    {
        delete id;
        cout << "Student Destructor Called" << endl;
    }
};

int main()
{
    Student *s1 = new Student(25, 100);

    s1->setGfName("Mohini Sharma");

    cout << "Gf Name: " << s1->getGfName() << endl;

    delete s1;

    return 0;
}