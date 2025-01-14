#include <iostream>

using namespace std;

void MyFunction() { // Function name usually starts with capital but case by case..
                    // right click, Refactor -> rename
}

// loval memories can't be used outside of local place
// memory will be return to stack memory

int main(void) {
    
    int x(0);   // x = 0;, x got an instance, global variable
    
    cout << x << " " << &x << endl;
    
    {
        x = 1;  // original x value has changed
        cout << x << " " << &x << endl;
    }
    
    {
        int x = 2;  // local variable
        cout << x << " " << &x << endl; // all x has different address
    }
    
    cout << x << " " << &x << endl;
    
    return 0;
}
