#include <iostream>
#include "Header.h"

using namespace std;

static int g_a = 1; // static global variable

int value = 123;    // global variable

void doSomething() {
//    int a = 1;
    static int a = 1;
    
    ++a;
    
    cout << a << endl;
    
    g_a = 2;
}

extern void doSomething1();    // external linking with extern keyword(you can omit)
extern int b;

int main(void) {
    
    cout << value << endl;      // 123
    
    int value = 1;  // local variable
    
    cout << ::value << endl;    // 123
    cout << value << endl;      // 1
    
    cout << "g_a = " << g_a << endl;
    
    doSomething();  // 2
    doSomething();  // 3 by static
    doSomething();  // 4
    doSomething();  // 5
    cout << "g_a = " << g_a << endl;
    
    doSomething1();
    
    cout << b << endl;
    
    cout << "In main.cpp file " << constants::pi << " " << &constants::pi << endl;
    
    return 0;
}
    /*
     int g_x; // external linkage
     static int g_x; // internal linkage
     const int g_x = ; // X
     
     extern int g_z;
     extern const int g_x;
     
     int g_y(1);
     static int g_y(1);
     const int g_y(1);
     
     extern int g_w(1);
     extern const int g_w(1);
     */
