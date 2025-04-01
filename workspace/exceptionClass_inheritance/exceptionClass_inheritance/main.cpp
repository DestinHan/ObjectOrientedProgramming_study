#include <iostream>

class Exception {
public:
    void report() {
        std::cerr << "Exception report" << std::endl;
    }
    
};

class ArrayException : public Exception {
public:
    void report() {
        std::cerr << "Array exception" << std::endl;
    }
    
};

class MyArray {
private:
    int m_data[5];
    
public:
    int & operator [] (const int & index) {
        
//        if(index < 0 || index >= 5) throw -1;
//        if(index < 0 || index >= 5) throw Exception();
        if(index < 0 || index >= 5) throw ArrayException();
        
        return m_data[index];
        
    }
    
};

void doSomething() {
    MyArray my_array;
    
    try {
        my_array[100];
    }
    catch (const int & x) {
        std::cerr << "Exception " << x << std::endl;
    }
    catch (ArrayException & e) {
        std::cout << "doSomething()" << std::endl;
        e.report();
        throw e;
    }
    catch (Exception & e) {
        std::cout << "doSomething()" << std::endl;
        e.report();
    }
    
}



int main() {
    
    using namespace std;
    
    try {
        doSomething();
    }
    catch (ArrayException & e) {
        cout << "main()" << endl;
        e.report();
    }
    
    
    return 0;
}
