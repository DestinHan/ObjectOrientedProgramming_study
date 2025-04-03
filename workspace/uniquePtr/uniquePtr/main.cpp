#include <iostream>
#include <memory>
#include "Resource.h"



int main() {
    
    using namespace std;
    
    {
//        Resource *res = new Resource(10000000);
//        std::unique_ptr<Resource> res(new Resource(10000000));
        
    }
    
    {
        std::unique_ptr<int> upi(new int);
//        auto *ptr = new Resource(5);
    }
    
    return 0;
}
