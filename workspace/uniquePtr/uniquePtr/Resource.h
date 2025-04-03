#ifndef Resource_h
#define Resource_h

#include <iostream>

class Resource {
private:
public:
    int m_data[100];
    
public:
    Resource() {
        std::cout << "Resource Constructed" << std::endl;
    }
    
    ~Resource() {
        std::cout << "Resource Destructed" << std:: endl;
    }
    
};

#endif
