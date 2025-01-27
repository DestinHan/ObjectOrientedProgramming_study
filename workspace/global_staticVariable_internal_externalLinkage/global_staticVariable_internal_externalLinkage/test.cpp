#include <iostream>
#include "Header.h"

using namespace std;

int b = 12345;

void doSomething1() {
    cout << "Hello" << endl;
    
    cout << "in test.cpp file " << constants::pi << " " << &constants::pi << endl;
}

