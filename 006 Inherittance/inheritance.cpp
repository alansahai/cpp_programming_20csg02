#include <iostream>
using namespace std;

class Employee {
  public:
    int ID; // Attribute to store employee ID
    string name; // Attribute to store employee name

    // Method to get employee details from user input
    void getDetails() {
      cout << "Enter employee ID: ";
      cin >> ID;
      cout << "Enter employee name: ";
      cin.ignore(); // Ignoring the newline character left in the input buffer
      getline(cin, name); // Reading the whole line for the employee name
    }

    // Method to display employee details
    void displayDetails() {
      cout << "Employee ID: " << ID << endl;
      cout << "Employee Name: " << name << endl;
    }
};

class Payroll : public Employee {
  public:
    float basicPay; // Attribute to store basic pay
    float dearnessAllowance; // Attribute to store dearness allowance
    float salary; // Attribute to store total salary

    // Method to calculate salary based on basic pay and dearness allowance
    void calculateSalary() {
      cout << "Enter basic pay: ";
      cin >> basicPay;
      dearnessAllowance = basicPay * 0.05; // Assuming dearness allowance is 5% of basic pay
      salary = basicPay + dearnessAllowance; // Total salary is basic pay plus dearness allowance
    }

    // Method to display the calculated salary
    void displaySalary() {
      cout << "Salary: " << salary << endl;
    }
};

int main() {
  Payroll employee; // Creating an instance of Payroll class
  employee.getDetails(); // Getting details of the employee
  employee.calculateSalary(); // Calculating salary for the employee
  employee.displayDetails(); // Displaying employee details
  employee.displaySalary(); // Displaying calculated salary
  return 0;
}
