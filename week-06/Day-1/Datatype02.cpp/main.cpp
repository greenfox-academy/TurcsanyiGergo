#include <iostream>

using namespace std;

// Define several things as a variable then print their values
// Your name as a string
// Your age as an integer
// Your height in meters as a double
// Whether you are married or not as a boolean

int main()
{

string name = "Gergely Turcsanyi";
int age = 34;
double height = 1.82;
bool married = 0;
string marriage = "";

    if (married)
        marriage = "married.";
    else
        marriage = "not married.";


cout << name << endl;
cout << age << endl;
cout << height << endl;
cout << "I am " << marriage << endl;

    return 0;
}
