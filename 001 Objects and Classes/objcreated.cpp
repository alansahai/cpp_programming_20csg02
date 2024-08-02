#include<iostream>
using namespace std;

class myClass{
private:
    static int count;
public:
    myClass(){
    count++;
    }
    ~myClass(){
    count--;
    }
    static void showCount(){
    cout << "Number of objects created: "<<count<<endl;
    }
};
int myClass::count = 0;
int main(){
myClass::showCount();
myClass obj1, obj2;
myClass::showCount();
myClass obj3, obj4;
myClass::showCount();
}
