#include <iostream>
#include <memory>
#include "Resource.h"

auto doSomething() {
//    auto res1 = std::make_unique<Resource>(5);
//    return res1;
    
    return std::unique_ptr<Resource>(new Resource(5)); // move
    
//    return std::make_unique<Resource>(5);
}

void doSomething2(std::unique_ptr<Resource> & res) {
    res->setAll(10);
}

int main() {
    
    using namespace std;
    
    {
//        Resource *res = new Resource(10000000);
//        std::unique_ptr<Resource> res(new Resource(10000000));      // destory automatically
        
    }
    
    {
        std::unique_ptr<int> upi(new int);
        
//        auto *ptr = new Resource(5);
//        std::unique_ptr<Resource> res1(new Resource(5));
        auto res1 = std::make_unique<Resource>(5);
        //auto res1 = doSomething();
        
        res1->setAll(5);
        res1->print();
        
        std::unique_ptr<Resource> res2;
        
        std::cout << std::boolalpha;
        std::cout << static_cast<bool>(res1) << std::endl;
        std::cout << static_cast<bool>(res2) << std::endl;
        
//        res2 = res1;          // unique pointer can't copy, ONLY move semantics
        res2 = std::move(res1);
        
        std::cout << std::boolalpha;
        std::cout << static_cast<bool>(res1) << std::endl;
        std::cout << static_cast<bool>(res2) << std::endl;
        
        if (res1 != nullptr) res1->print();
        if (res2 != nullptr) res2->print(); // (*res2).print();
    }
    
    {
        auto res1 = std::make_unique<Resource>(5);
        res1->setAll(1);
        res1->print();
        
        doSomething2(res1);
        //doSomething2(res1.get());
        
        std::cout << std::boolalpha;
        res1->print();
    }
    
    return 0;
}
