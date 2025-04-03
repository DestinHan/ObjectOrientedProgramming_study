#include <iostream>
#include "Resource.h"
#include "Autoptr.h"

//RAII : resource acquisition is initialization
void doSomething() {
//    Resource *res = new Resource;       // dull pointer
    
    AutoPtr<Resource> res = new Resource;   // smart pointer
    
//    delete res;
    
    return;
}

int main() {
    
    using namespace std;
    
    
    
    return 0;
}
