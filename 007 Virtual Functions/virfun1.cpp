//Using the concept of pointers write a function that swaps the private data values of two objects of the same class type

#include <iostream>
#include <conio.h>

using namespace std;

class MyClass {
    private:
        int value;

    public:
        MyClass(int v) : value(v) {}

        void setValue(int v) {
            value = v;
        }

        int getValue() {
            return value;
        }

        void swap(MyClass* other) {
            int temp = other->value;
            other->value = this->value;
            this->value = temp;
        }
};

int main() {
    MyClass obj1(10);
    MyClass obj2(20);

    cout << "Before swapping:" << endl;
    cout << "obj1 value: " << obj1.getValue() << endl;
    cout << "obj2 value: " << obj2.getValue() << endl;

    obj1.swap(&obj2);

    cout << "\nAfter swapping:" << endl;
    cout << "obj1 value: " << obj1.getValue() << endl;
    cout << "obj2 value: " << obj2.getValue() << endl;

    return 0;
}
