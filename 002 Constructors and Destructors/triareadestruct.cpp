#include <iostream>
#include <cmath>
using namespace std;

class Triangle
{
private:
    float base;
    float height;

public:
    // Constructor
    Triangle(float b, float h) : base(b), height(h) {}

    // Destructor
    ~Triangle()
    {
        cout << "Triangle object destroyed" << endl;
    }

    // Function to calculate area
    float area()
    {
        return 0.5 * base * height;
    }
};

int main()
{
    float base, height;

    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;

    // Create triangle object
    Triangle tri(base, height);

    // Calculate and print area
    cout << "Area: " << tri.area() << endl;

    return 0;
}
