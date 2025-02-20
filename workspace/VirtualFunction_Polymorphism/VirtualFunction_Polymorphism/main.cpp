#include <iostream>

class A {
    
public:
    virtual void print() { std::cout << "A" << std::endl; }
    
};

class B : public A {
    
public:
    virtual void print() { std::cout << "B" << std::endl; }
    
};

class C : public B {
    
public:
    virtual void print() { std::cout << "C" << std::endl; }
    
};

class D : public C {
    
public:
    virtual void print() { std::cout << "D" << std::endl; }
    
};

int main() {
    
    A a;
    a.print();
    
    B b;
    b.print();
    
    C c;
    c.print();
    
    D d;
    d.print();
    
    A &ref = b;
    ref.print();
    
    A &reff = c;
    reff.print();
    
    ref.print();
    
}
