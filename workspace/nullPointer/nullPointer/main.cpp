#include <iostream>
#include <cstddef>

void doSomething(double *ptr) { // pointer variable
    
    if (ptr != nullptr) {
        std::cout << *ptr << std::endl; // dereference
    }
    else{
        // do something with ptr
        std::cout << "Null ptr, do nothing" << std::endl;
    }
    
}

int main() {
    
    using namespace std;
    
    double *ptr = nullptr;    // modern c-style, avoid garbage value
    
    doSomething(ptr);
    doSomething(nullptr);
    
    double d = 123.4;
    
    doSomething(&d);
    
    ptr = &d;
    
    doSomething(ptr);
    
    std::nullptr_t nptr;
    
    cout << "address of pointer variable in main() is " << &ptr << endl;
    
    
    return 0;
}
