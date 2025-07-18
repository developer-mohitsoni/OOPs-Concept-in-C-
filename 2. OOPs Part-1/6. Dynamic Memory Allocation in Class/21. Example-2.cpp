#include <iostream>
using namespace std;

class Student
{
private:
  string gf;

public:
  int id;
  string name;
  int age;
  string gender;

  Student() {} // Default constructor

  Student(int id, string name, int age, string gender, string gf)
  {
    this->id = id;
    this->name = name;
    this->age = age;
    this->gender = gender;
    this->gf = gf;
  }

  string getGf() const
  {
    return gf;
  }

  void display() const
  {
    cout << "ID: " << id << ", Name: " << name << ", Age: " << age << ", Gender: " << gender << ", GF: " << gf << endl;
  }
};

int main()
{
  int n;
  cout << "Enter number of students: ";
  cin >> n;

  // 🔥 Dynamic array of Student objects
  Student *students = new Student[n];

  // Taking input
  for (int i = 0; i < n; i++)
  {
    int id, age;
    string name, gender, gf;
    cout << "\nEnter details for student " << i + 1 << ":\n";
    cout << "ID: ";
    cin >> id;
    cout << "Name: ";
    cin >> name;
    cout << "Age: ";
    cin >> age;
    cout << "Gender: ";
    cin >> gender;
    cout << "GF: ";
    cin >> gf;

    // Using parameterized constructor with placement
    students[i] = Student(id, name, age, gender, gf);
  }

  // Displaying student info
  cout << "\nDisplaying student data:\n";
  for (int i = 0; i < n; i++)
  {
    students[i].display();
  }

  // Free the allocated memory
  delete[] students;

  return 0;
}
