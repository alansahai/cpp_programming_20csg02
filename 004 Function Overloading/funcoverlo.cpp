#include <iostream>
#include <cmath>
using namespace std;

class Calci
{
public:
    // func to calc sum of two int
    int sum(int a, int b)
    {
        return a + b;
    }

    // func to calc sum of two floats
    float sum(float a, float b)
    {
        return a + b;
    }

    // func to calculate sum of two doubles
    double sum(double a, double b)
    {
        return a + b;
    }

    // func to calculate sum of 3 int
    int sum(int a, int b, int c)
    {
        return a + b + c;
    }

    // func to calc sum of 3 floats
    float sum(float a, float b, float c)
    {
        return a + b + c;
    }

    // func to calculate the sum of 3 doubles
    double sum(double a, double b, double c)
    {
        return a + b + c;
    }
};

int main()
{
    Calci numSum; // creating an object of the class

    // the below functions willl calculate the sum of all the values passed to the func's
    int sum1 = numSum.sum(10, 20);
    float sum2 = numSum.sum(12.5, 35.6);
    double sum3 = numSum.sum(1.25365, 3.26542);
    int sum4 = numSum.sum(10, 20, 30);
    float sum5 = numSum.sum(3.6, 5.7, 6.3);
    double sum6 = numSum.sum(3.265423, 1.236597, 13.265987);

    cout << "Sum of 2 integers : " << sum1 << endl;
    cout << "Sum of 2 float    : " << sum2 << endl;
    cout << "Sum of 2 double   : " << sum3 << endl;
    cout << "Sum of 3 integers : " << sum4 << endl;
    cout << "Sum of 3 float    : " << sum5 << endl;
    cout << "Sum of 3 double   : " << sum6 << endl;

    // termination
    return 0;
}
