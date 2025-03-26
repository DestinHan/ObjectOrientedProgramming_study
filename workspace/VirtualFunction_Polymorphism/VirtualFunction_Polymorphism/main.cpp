#include <iostream>

class A {
    
public:
    virtual void print() { std::cout << "A" << std::endl; }     // if child class has overrided function then uses child class function.
    
};

class B : public A {
    
public:
    virtual void print() { std::cout << "B" << std::endl; }
    
};

class C : public B {
    
public:
    virtual void print() { std::cout << "C" << std::endl; }             // virtual in A effects in here too but, it's nice to just write virtual also in child class.
    
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
    
    A & ref = b;
    ref.print();
    
    A & reff = c;
    reff.print();
    
    A & refff = d;
    refff.print();
    
    C &reffff = d;
    reffff.print();
    
}
