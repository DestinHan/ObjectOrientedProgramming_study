#include <iostream>

class A {
    
public:
    virtual void print(int x) const { std::cout << "A" << std::endl; }
    
};

class B : public A {
    
public:
    virtual void print(int x) const override { std::cout << "B" << std::endl; }
    
};

class C : public B {
    
public:
    virtual void print() final { std::cout << "C" << std::endl; }   // can't overrid in D
    
};

class D : public C {
    
public:
//    virtual void print() { std::cout << "D" << std::endl; }
    
};

int main() {
    
    A a;
    B b;
    
    A & ref = b;
    ref.print(1);
    b.print(1);
    a.print(1);
    
}
