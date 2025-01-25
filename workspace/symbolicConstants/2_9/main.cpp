#include <iostream>
#include "myConstance.h"

using namespace std;

void printNumber(const int my_number) {
    
    int n = my_number;
    cout << my_number << endl;
    
}

int main(void) {
    
    const double gravity{ 9.8 };
    double const gravityy{ 9.8 };
    int number;
    
    printNumber(123);
    
    cin >> number;
    
    const int special_number(number);   // compile time constant
    
    constexpr int my_const = 123;
    
    double radius;
    cin >> radius;
    
    double circumference = 2.0 * radius * constants::pi;
    
    cout << circumference << endl;
    
    return 0;
}
