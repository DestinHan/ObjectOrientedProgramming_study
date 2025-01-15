#include <iostream>

using namespace std;

int main(void) {
    
    bool bValue = false;
    char chValue = 'A';
    float fValue = 3.141592f;
    double dValue = 3.141592;
    auto aValue = 3.141592;
    
    cout << bValue << endl;
    cout << (int)chValue << endl;
    cout << chValue << endl;
    cout << fValue << endl;
    cout << dValue << endl;
    cout << aValue << endl;
    cout << sizeof(aValue) << endl; // shown as byte
    cout << sizeof(bool) << endl;
    
    int i = (int)3.1415; // casting as integer, copy initialization
    int a(123); // direct initialization
    int b{ 123 }; // uniform initialization
    
    int k = 789, l(456), m{ 123 };
    
    
    return 0;
}
