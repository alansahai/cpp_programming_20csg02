#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

class fixedDep
{
    int fdno, month;
    float amount, rate, maturity;
    char name[20];

public:
    // CONSTRUCTOR TO DESCRIBE THE FD DETAILS
    fixedDep(int fno, int mnt, float am, float rt, char *nm)
    {
        fdno = fno;
        month = mnt;
        amount = am;
        rate = rt;
        strcpy(name, nm); // COPIES NAME TO CLASS MEMB.
    }
    // FN TO CALC. MATURITY AMT
    void calculate()
    {
        double year;
        year = month / 12.0;
        maturity = amount * pow((1 + rate / 100), year);
    }

    // FN TO DISPLAY FD DETAILS
    void display()
    {
        cout << "\n FdNo.:  " << fdno << endl;
        cout << "\n Month:  " << month << endl;
        cout << "\n Amount:  " << amount << endl;
        cout << "\n Rate:  " << rate << endl;
        cout << "\n Maturity Amount:  " << maturity << endl;
        cout << "\n Name:  " << name << endl;
    }
};

int main()
{
    int fdno, month;
    float amount, rate;
    char name[20];
    cout << "\n Enter Details : \n";
    cout << "Enter FD No. :  ";
    cin >> fdno;
    cout << "Enter Month  :  ";
    cin >> month;
    cout << "Enter Amount :  ";
    cin >> amount;
    cout << "Enter Rate   :  ";
    cin >> rate;
    cout << "Enter Name   :  ";
    cin >> name;
    fixedDep f1(fdno, month, amount, rate, name); // CREATES FD OBJECT
    f1.calculate();                               // CALC MATURITY AMOUNT
    f1.display();                                 // DISPLAY FD DETAILS
    return 0;
}
