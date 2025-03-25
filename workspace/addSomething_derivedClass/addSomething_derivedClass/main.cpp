#include <iostream>

class Base {
protected:
    int m_value;
    
public:
    Base(const int & value) : m_value(value) {}
    
};

class Derived : public Base {
private:
    
public:
    Derived(int value) : Base(value) {}
    
    void setValue(int value) {
        Base::m_value = value;
        // do some work with the variables defined in Derived
    }
    
};

int main() {
    
    using namespace std;
    
    
    return 0;
}
