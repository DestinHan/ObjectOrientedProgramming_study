#include <iostream>
#include <string>

class Base {
public:
    int m_i = 0;
    
    virtual void print() {
        std::cout << "I'm Base" << std::endl;
    }
    
};

class Derived1 : public Base {
public:
    int m_j = 1024;
    
    virtual void print() override {
        std::cout << "I'm derived" << std::endl;
    }
    
};

class Derived2 : public Base {
public:
    std::string m_name = "Dr. Two";
    
    virtual void print() override {
        std::cout << "I'm derived" << std::endl;
    }
    
};

int main() {
    
    using namespace std;
    
    Derived1 d1;
    Base *base = &d1;
    
    auto *base_to_d1 = dynamic_cast<Derived1*>(base);
    
    cout << base_to_d1->m_j << endl;
    
    base_to_d1->m_j = 123;
    cout << d1.m_j << endl;
    
    return 0;
}
