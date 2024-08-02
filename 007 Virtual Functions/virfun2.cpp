
#include <iostream>

class Base {
protected:
    int data;

public:
    Base(int d) : data(d) {}

    // Virtual function to get data
    virtual int getData() const {
        return data;
    }

    // Virtual function to set data
    virtual void setData(int d) {
        data = d;
    }

    // Function to swap data of two objects of the same class type
    static void swapData(Base* obj1, Base* obj2) {
        int temp = obj1->getData();
        obj1->setData(obj2->getData());
        obj2->setData(temp);
    }
};

class Derived : public Base {
public:
    Derived(int d) : Base(d) {}

    // Override virtual function to get data
    int getData() const override {
        return data;
    }

    // Override virtual function to set data
    void setData(int d) override {
        data = d;
    }
};

int main() {
    Base* obj1 = new Derived(10);
    Base* obj2 = new Derived(20);

    std::cout << "Before swapping:" << std::endl;
    std::cout << "obj1 data: " << obj1->getData() << std::endl;
    std::cout << "obj2 data: " << obj2->getData() << std::endl;

    // Swapping data values using the swapData function
    Base::swapData(obj1, obj2);

    std::cout << "\nAfter swapping:" << std::endl;
    std::cout << "obj1 data: " << obj1->getData() << std::endl;
    std::cout << "obj2 data: " << obj2->getData() << std::endl;

    delete obj1;
    delete obj2;

    return 0;
}
