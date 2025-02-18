#include <iostream>

class B;    // forward declaration.. not good really

class A {
    
private:
    int m_value = 1;
    
    friend void doSomething(A& a, B& b);
    
};

class B {
    
private:
    int m_value = 2;
    
    friend void doSomething(A& a, B& b);
    
};

void doSomething(A& a, B& b) {
    std::cout << a.m_value << " " << b.m_value << std::endl;
}

int main() {
    
    using namespace std;
    
    A a;
    B b;
    doSomething(a, b);
    
    return 0;
}
