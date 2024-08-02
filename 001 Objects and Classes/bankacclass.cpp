#include<iostream>
#include<string>
using namespace std;

class BankAccount{
private:
    string depositorName;
    int accountNumber;
    double withdrawalAmount;
    double balance;

public:
    BankAccount(){
    depositorName = "";
    accountNumber=0;
    withdrawalAmount = 0.0;
    balance = 0.0;
    }

    BankAccount(string name, int accNum, double bal){
    depositorName = name;
    accountNumber = accNum;
    withdrawalAmount = 0.0;
    balance = bal;
    }

    void setDepositorName(string name){
    depositorName = name;
    }

    void setAccountNumber(int accNum){
    accountNumber = accNum;
    }

    void setWithdrawalAmount(double amount){
    withdrawalAmount = amount;
    }

    void setBalance(double bal){
    balance = bal;
    }

    string getDepositorName(){
    return depositorName;
    }

    int getAccountNumber(){
    return accountNumber;
    }

    double getWithdrawalAmount(){
    return withdrawalAmount;
    }

    double getBalance(){
    return balance;
    }

    void withdraw(double amount){
    if (balance>=amount){
        balance-=amount;
        withdrawalAmount = amount;
        cout << "Withdrawal Successful. Available Balance: Rs. "<<balance<<endl;
    }
    else {
        cout << "Insufficient Balance. Withdrawal isn't possible"<<endl;
    }
    }

    void deposit(double amount){
    balance+=amount;
    cout <<"Deposit Successful. New Balance: Rs. "<<balance<<endl;
    }

    void displayAccountDetails(){
    cout << "Depositor Name: "<<depositorName<<endl;
    cout << "Account number: "<<accountNumber<<endl;
    cout << "Balance: Rs. "<< balance<<endl;
    }
};

int main(){
    BankAccount account1("John Paul", 13542, 6000.0);
    account1.displayAccountDetails();
    account1.withdraw(3000.0);
    account1.deposit(2000.0);
    account1.setWithdrawalAmount(500.0);
    account1.withdraw(account1.getWithdrawalAmount());
    return 0;
}
