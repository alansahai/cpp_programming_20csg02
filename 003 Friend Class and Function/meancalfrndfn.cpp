#include <iostream>
using namespace std;

// class to read two numbers
class Number
{
private:
    int num2;

public:
    int num1;

    void numInput()
    {
        cout << "Enter number 1:";
        cin >> num1;
        cout << "Enter number 2:";
        cin >> num2;
    }

    // declaring a friend class to access the private members
    friend class meanCalci;
};

// class to calculate the mean
class meanCalci
{
public:
    static double calcMean(Number no)
    {
        int sum = 0;
        int i = 0;

        // loop through the range to add the numbers between the range of numbers
        for (i = no.num1; i <= no.num2; i++)
        {
            sum = sum + i;
        }

        // returns the mean value
        return (double)sum / (no.num2 - no.num1 + 1);
    }
};

int main()
{
    Number num;
    num.numInput();

    double mean = meanCalci::calcMean(num);

    cout << "Mean Value: " << mean << endl;
    return 0;
}
