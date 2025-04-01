#include <iostream>

template<class T>
class A {
private:
    T m_value;
    
public:
    A(const T & input) : m_value(input) {}
    
    void print() {
        std::cout << m_value << std::endl;
    }
    
};

template<class T>
class A<T*> {
private:
    T* m_value;
    
public:
    A(T * input) : m_value(input) {}
    
    void print() {
        std::cout << *m_value << std::endl;
    }
    
};

int main() {
    
    using namespace std;
    
    A<int> a_int(123);
    
    a_int.print();
    
    int temp = 456;
    A<int*> a_int_ptr(&temp);
    a_int_ptr.print();
    
    return 0;
}
