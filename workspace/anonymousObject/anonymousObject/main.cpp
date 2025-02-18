#include <iostream>

class A {
  
public:
    unsigned int m_value;
    
    A(const int& input) : m_value(input) {
        std::cout << "Constructor" << std::endl;
    }
    ~A() {
        std::cout << "Destructor" << std::endl;
    }
    
    void print() {
        std::cout << "Hello " << m_value << std::endl;
    }
    
};

int main() {
    
    using namespace std;
    
//    A a;
//    a.print();
    
    A(2).print();
    A(45).print();
    
    
    return 0;
}
