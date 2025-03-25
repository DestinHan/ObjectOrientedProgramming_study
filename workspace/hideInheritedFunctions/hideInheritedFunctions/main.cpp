#include <iostream>

class Base {
protected:
    int m_i;
    
public:
    Base(int value) : m_i(value) {}
    
    void print() {
        std::cout << "I'm Base " << std::endl;
    }
    
};

class Derived : public Base {
private:
    double m_d;
    
public:
    Derived(int value) : Base(value) {}
    
    using Base::m_i;
    
private:
    using Base::print;  // do not use ()
    
};

int main() {
    
    using namespace std;
    
    Derived derived(7);
    
    derived.m_i = 1;    // using Base::m_i
//    derived.print();  private....
    
    return 0;
}
