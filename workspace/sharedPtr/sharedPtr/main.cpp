#include <iostream>
#include "Resource.h"

void doSomething(std::unique_ptr<Resource> res) {
    
}

int main() {
    
    using namespace std;
    
//    doSomething(std::make_unique<Resource>(1000000));
//    Resource *res = new Resource(3);
//    res->setAll(1);
    
    {
//        std::shared_ptr<Resource> ptr1(res);
        
        auto ptr1 = std::make_shared<Resource>(3);
        ptr1->setAll(1);
        
        ptr1->print();      // 111
        
        {
            std::shared_ptr<Resource> ptr2(ptr1);
            //std::shared_ptr<Resource> ptr2(res);      // problem...
            //auto ptr2 = ptr1;
            
            ptr2->setAll(3);
            ptr2->print();  // 333
            
            std::cout << "Going out of the block" << std::endl;
        }
        ptr1->print();      // 333
        
        std::cout << "Going out of the outer block" << std::endl;
    }
    
    return 0;
}
