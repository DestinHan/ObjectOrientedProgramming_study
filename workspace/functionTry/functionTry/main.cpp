#include <iostream>

void doSomething() {
    
    try {
        throw - 1;
    }
    catch (...) {
        std::cout << "Catch in doSomething()" << std::endl;
    }
    
}

class A {
private:
    int m_x;
    
public:
    A(int x) : m_x(x) {
        if (x <= 0)
            throw 1;
    }
    
};

class B : public A {
public:
//    B(int x) : A(x) {}
    
    B(int x) try : A(x) {
        
    }
    catch(...) {
        std::cout << "Catch in B constructor " << std::endl;
        throw;
    }
    
};

int main() {
    
    using namespace std;
    
    try {
        B b(0);
    }
    catch(...) {
        cout << "Catch in main()" << endl;
    }
    
    return 0;
}
