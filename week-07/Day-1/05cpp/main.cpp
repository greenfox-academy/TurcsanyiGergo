#include <iostream>
using namespace std;

// Create a function which throws an char
// In the main(), put that function in a try block
// Also in the main() catch, what your function throws


void Throwtheinteger(int num1, int num2);

int main() {

    try {

    int num1 = 6;
    int num2 = 0;

    Throwtheinteger(num1, num2);

    }
     catch (char x) {
        cout << "You cannot divide by 0, ERROR: " << x << "." << endl;
    }
	return 0;
}

void Throwtheinteger(int num1, int num2) {

    if (num2 == 0){
        throw 'Y';
    }
        cout << num1/num2 << endl;
}
