#include <iostream>

using namespace std;

// create a function that adds two integers.
// Create an other function of the same name that takes 3 integers and returns the result of adding these 3 integers.
// Write code that uses both after one an other and prints out the results in a new line each.
// For input use 1 and 2, then 1, 2 and 3.

int sum (int a, int b);
int sum (int a, int b, int c);

int main() {

    cout << sum(1, 2) << endl;
    cout << sum(1, 2, 3) << endl;

	return 0;
}

int sum (int a, int b) {


    return a + b;
}

int sum (int a, int b, int c) {

    return a + b + c;
}
