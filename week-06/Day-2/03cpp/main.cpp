#include <iostream>
#include <string>

using namespace std;

class Student {
  public:
    string name;
    unsigned int age;
    Student(string name, unsigned int age) {
      this->age = age;
      this->name = name;
    }
     ~Student() {
      cout << "See you next time!" << endl;
      }
      string greet() {
          return "Hello, my name is: " + name + ".\n";
      }
};

int main() {
  // Create a method on the Student class called "greet" that returns a string
  // like: "Hello my name is: <student name>"
    Student st ("John", 21);

    cout << st.greet() << endl;

  return 0;
}
