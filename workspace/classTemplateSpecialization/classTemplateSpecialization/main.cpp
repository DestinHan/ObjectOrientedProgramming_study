#include <iostream>

template<typename T>
class A {
public:
    
    A(const T & input) {}
    
    void doSomething() {
        std::cout << typeid(T).name() << std::endl;
    }
    void test() {}
    
};

template<>
class A<char> {
public:
    
    A(const char & input) {}
    
    void doSomething() {
        std::cout << "Char type speciallization" << std::endl;
    }
    
};

int main() {
    
    using namespace std;
    
    A<int>      a_int(1);
    A<double>   a_double(2.2);
    A<char>     a_char('a');
    
    a_int.test();
    
    a_int.doSomething();
    a_double.doSomething();
    a_char.doSomething();
    
    return 0;
}
