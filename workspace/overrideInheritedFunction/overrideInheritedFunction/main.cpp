#include <iostream>

class Base {
protected:
    int m_i;
    
public:
    Base(int value) : m_i(value) {}
    
    void print() {
        std::cout << "I'm Base" << std::endl;
    }
    
    friend std::ostream & operator << (std::ostream & out, const Base & b) {
        out << "This is base output" << std::endl;
        return out;
    }
    
};

class Derived : public Base {
private:
    double m_d;
    
public:
    Derived(int value) : Base(value) {}
    
    void print() {
        Base::print();
        std::cout << "I'm Derived" << std::endl;
    }
    
    friend std::ostream & operator << (std::ostream & out, const Derived & b) {
        std::cout << static_cast<Base>(b);
        out << "This is derived output" << std::endl;
        return out;
    }
    
};

int main() {
    
    using namespace std;
    
    Base base(5);
    base.print();
    
    Derived derived(7);
    derived.print();
    derived.Base::print();
    
    cout << base;
    cout << derived;
    
    return 0;
}
