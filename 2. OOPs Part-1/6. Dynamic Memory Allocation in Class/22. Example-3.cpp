#include <iostream>
using namespace std;

class Student
{
public:
  string name;

  Student() {}
  Student(string n) { name = n; }

  void greet()
  {
    cout << "Hello, my name is " << name << endl;
  }
};

int main()
{
  Student *students = new Student[3];

  // Assigning names using constructor
  students[0] = Student("Mohit");
  students[1] = Student("Rahul");
  students[2] = Student("Shivam");

  cout << "\n Using Array Notation:\n";
  for (int i = 0; i < 3; i++)
  {
    students[i].greet(); // Internally *(students + i).greet()
  }

  cout << "\n Using Pointer Arithmetic:\n";
  for (int i = 0; i < 3; i++)
  {
    (*(students + i)).greet(); // Explicit dereference
  }

  cout << "\n Using Arrow Operator:\n";
  for (int i = 0; i < 3; i++)
  {
    (students + i)->greet(); // Shortcut
  }

  delete[] students;
  return 0;
}
