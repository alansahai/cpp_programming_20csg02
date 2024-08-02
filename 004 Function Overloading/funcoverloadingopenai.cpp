#include <iostream>
#include <cstdarg> // For va_list, va_start, va_arg, and va_end

// Function to add integers
int Sum(int n, ...) {
    int sum = 0;
    va_list args;
    va_start(args, n);
    for (int i = 0; i < n; ++i) {
        sum += va_arg(args, int);
    }
    va_end(args);
    return sum;
}

// Function to add doubles
double Sum(double n, ...) {
    double sum = 0.0;
    va_list args;
    va_start(args, n);
    for (int i = 0; i < n; ++i) {
        sum += va_arg(args, double);
    }
    va_end(args);
    return sum;
}

int main() {
    int choice;
    std::cout << "Choose the data type to perform addition:" << std::endl;
    std::cout << "1. Integer" << std::endl;
    std::cout << "2. Double" << std::endl;
    std::cin >> choice;

    int count;
    std::cout << "Enter the number of values to be summed: ";
    std::cin >> count;

    if (choice == 1) {
        int num;
        std::cout << "Enter " << count << " integers:" << std::endl;
        std::vector<int> values;
        for (int i = 0; i < count; ++i) {
            std::cin >> num;
            values.push_back(num);
        }
        std::cout << "Sum of integers: " << Sum(count, values[0], values[1], values[2], values[3], values[4]) << std::endl;
    } else if (choice == 2) {
        double num;
        std::cout << "Enter " << count << " doubles:" << std::endl;
        std::vector<double> values;
        for (int i = 0; i < count; ++i) {
            std::cin >> num;
            values.push_back(num);
        }
        std::cout << "Sum of doubles: " << Sum(count, values[0], values[1], values[2], values[3], values[4]) << std::endl;
    } else {
        std::cout << "Invalid choice!" << std::endl;
    }

    return 0;
}
