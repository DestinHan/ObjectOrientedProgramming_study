#include <iostream>

class Base {
    
public:
    virtual ~Base() {
        std::cout << "~Base()" << std::endl;
    }
    
};

class Derived : public Base {
private:
    int* m_array;
    
public:
    Derived(int length) {
        m_array = new int[length];
    }
    
    ~Derived() {
        std::cout << "~Derived" << std::endl;
        delete[] m_array;
    }
    
};

int main() {
    
    using namespace std;
    
//    Derived derived(5);
    
    Derived* derived = new Derived(5);
    Base *base = derived;
    delete base;
    
    return 0;
}
