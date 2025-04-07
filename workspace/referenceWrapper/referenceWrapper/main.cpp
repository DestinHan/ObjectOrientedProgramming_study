#include <iostream>
#include <vector>
#include <functional>

class Base {
public:
    int m_i = 0;
    
    virtual void print() {
        std::cout << "I'm Base" << std::endl;
    }
    
};

class Derived : public Base {
public:
    int m_j = 1;
    
    virtual void print() override {
        std::cout << "I'm Derived" << std::endl;
    }
    
};

void doSomething(Base & b) {
    b.print();
}

int main() {
    
    using namespace std;
    
    Derived d;
    
    Base &b = d;
    d.print();
    doSomething(b);
    doSomething(d);
    
    Base a;
    Derived c;
    
    std::vector<std::reference_wrapper<Base>> my_vec;
    my_vec.push_back(a);
    my_vec.push_back(c);
    
    for(auto & ele : my_vec)
        ele.get().print();
    
    return 0;
}
