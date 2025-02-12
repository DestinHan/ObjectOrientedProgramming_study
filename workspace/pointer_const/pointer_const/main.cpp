#include <iostream>

int main() {
    
    using namespace std;
    
    const int value = 5;
    const int *ptr = &value;
    
//    *ptr = 6; can't modify the value because of const
    
    cout << *ptr << endl;
    
    int value1 = 5;
    const int *ptr1 = &value1;
    
    int value2 = 6;
    ptr1 = &value2; // can change the address
    
    
    int value3 = 5;
    int *const ptr3 = &value3;
    *ptr3 = 10;
    cout << *ptr3 << endl;
    int value4 = 8;
//    ptr3 = &value4;   can't
    
    return 0;
}
