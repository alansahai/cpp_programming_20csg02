#include <iostream>
using namespace std;

int main() {
    try {
        // Some code that may throw different types of exceptions
        int num;
        cout << "Enter a number: ";
        cin >> num;

        if (num == 0)
            throw "Division by zero error"; // throwing a const char*

        if (num < 0)
            throw -1; // throwing an integer

        if (num > 100)
            throw 1.5; // throwing a double
    }
    catch (const char* msg) {
        cout << "Exception caught: " << msg << endl;
    }
    catch (int x) {
        cout << "Exception caught: Negative number entered" << endl;
    }
    catch (double d) {
        cout << "Exception caught: Number greater than 100 entered" << endl;
    }

    cout << "End of program" << endl;
    return 0;
}
