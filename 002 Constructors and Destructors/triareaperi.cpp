#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;

class Area
{
private:
    float ar; // variable to store area
public:
    // constructor to calculate the area of the circle
    Area(float r)
    {
        ar = 3.14 * r * r;
    }

    // constructor to calculate the area of therectangle
    Area(float l, float b)
    {
        ar = l * b;
    }

    // constructor to calculate the area of the triangle
    Area(float a, float b, float c)
    {
        float s;
        s = (a + b + c) / 2;
        ar = s * (s - a) * (s - b) * (s - c);
        ar = pow(ar, 0.5);
    }

    // function to diplay the area
    void display()
    {
        cout << "\n Area:" << ar << endl;
    }
};

int main()
{
    int ch;
    float x, y, z; // variable to store the dimensions
    do
    {
        // prompting the user to select the operation
        cout << "\n1. Area of the circle";
        cout << "\n2. Area of the rectangle";
        cout << "\n3. Area of the triangle";
        cout << "\n4. Exit\n";
        cout << "Enter the option:";
        cin >> ch; // reads user choice

        switch (ch)
        {
        case 1: // calculate the area of the circle
        {
            cout << "\nEnter the radius of the circle:";
            cin >> x;
            Area a1(x);
            a1.display();
        }
        break;

        case 2: // calculate the area of the rectangle
        {
            cout << "\nEnter the length and breadth of the rectangle:";
            cin >> x >> y;
            Area a2(x, y);
            a2.display();
        }
        break;

        case 3: // calculate the area of the triangle
        {
            cout << "\nEnter the 3 sides of the triangle:";
            cin >> x >> y >> z;
            Area a3(x, y, z);
            a3.display();
        }
        break;

        case 4: // exits the program
            exit(0);

        default: // invalid choice, error message gets displayed
            cout << "\n Invalid Choice.";
        }
    } while (ch != 4); // continues till thi=e input is 4, more than 4 shows default case
    return 0;          // termination
}
