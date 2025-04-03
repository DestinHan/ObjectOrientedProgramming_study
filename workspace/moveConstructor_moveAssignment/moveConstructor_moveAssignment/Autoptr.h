#ifndef Autoptr_h
#define Autoptr_h

#include <iostream>

template<class T>
class AutoPtr {
private:
    T* m_ptr;
    
public:
    AutoPtr(T* ptr = nullptr) : m_ptr(ptr) {
        std::cout << "AutoPtr default construtor" << std::endl;
    }
    
    ~AutoPtr() {
        std::cout << "AutoPtr destructor" << std::endl;
    }
    
    AutoPtr(const AutoPtr& a) {
        std::cout << "AutoPtr copy constructor" << std::endl;
        
        //deep copy
        m_ptr = new T;
        *m_ptr = *a.m_ptr;
    }
    
    AutoPtr & operator = (const AutoPtr& a) {
        std::cout << "AutoPtr copy assignment" << std::endl;
        
        if(&a == this) {
            return *this
        }
        
        if (m_ptr != nullptr) { delete m_ptr; }
        
        // deep copy
        m_ptr = new T;
        *m_ptr = *a.m_ptr;
        
        return *this;
    }
    
}

#endif
