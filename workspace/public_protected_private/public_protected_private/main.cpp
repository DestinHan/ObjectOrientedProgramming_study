#include <iostream>

class Base {
public:
    int m_public;
    
protected:
    int m_protected;
    
private:
    int m_private;
    
};

class Derived : public Base {
public:
    Derived() {
        m_protected = 123;  //  can
//        m_private = 123;      can't
    }
};

class Derived1 : protected Base {
public:
    Derived1() {
        Base::m_protected = 123;
    }
};

int main() {
    
    using namespace std;
    
    Base base;
    
    base.m_public = 123;
//    base.m_protected = 123;   can't
//    base.m_private = 123;     can't
    
    Derived derived;
    derived.m_public = 123;
//    derived.m_protected = 123;       can't, only inside of derived class
//    derived.m_protected = 123;    // can't

    
    return 0;
}
