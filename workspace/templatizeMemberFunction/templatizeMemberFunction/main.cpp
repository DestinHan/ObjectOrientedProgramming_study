#include <iostream>

template<class T>
class A {
private:
    T m_value;
    
public:
    A(const T & input) : m_value(input) {}
    
    template<typename TT>
    void doSomething(const TT & input) {
        std::cout << typeid(T).name() << " " << typeid(TT).name() << std::endl;
        std::cout << (TT)m_value << std::endl;
    }
    
    void print() {
        std::cout << m_value << std::endl;
    }
    
};

int main() {
    
    using namespace std;
    
    A<int> a_int(123);
    a_int.print();
    
    a_int.doSomething(123.4);
    a_int.doSomething(123.4f);
    a_int.doSomething('c');
    
    return 0;
    
}
