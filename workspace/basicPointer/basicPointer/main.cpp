#include <iostream>

// Local variable uses stack memeory
// Global variable uses heap memory

int main() {
    
    using namespace std;
    
    int x = 5;
    double d = 1.0;
    
    cout << x << endl;
    cout << &x << endl; // & : address-of operator
    
    // de-reference operator (*)    :   approach
    
    cout << *(&x) << endl;  // *&x 5
    
    // Pointer is basically "variable" which saves the first address
    
    typedef int* pint;
    
//    int * ptr_x = &x, *ptr_y = &x;
//    ptr_x = &x;
    
//    pint ptr_x = &x, ptr_y = &x;
    
    int *ptr_x = &x;
    double *ptr_d = &d;
    
    x = 6;
    
    cout << ptr_x << endl;
    cout << *ptr_x << endl;     // 6
    
    d = 1.2;
    
    cout << ptr_d << endl;
    cout << *ptr_d << endl;
    
    cout << typeid(ptr_x).name() << endl;   // pointer to integer (Pi)
    
    cout << sizeof(x) << endl;
    cout << sizeof(d) << endl;
    cout << sizeof(&x) << " " << sizeof(ptr_x) << endl;
    cout << sizeof(&d) << " " << sizeof(ptr_d) << endl;
    
    return 0;
}
