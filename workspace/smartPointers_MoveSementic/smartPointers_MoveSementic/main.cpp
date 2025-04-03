#include <iostream>
#include "Resource.h"
#include "Autoptr.h"

//RAII : resource acquisition is initialization
void doSomething() {
    
    try{
        AutoPtr<Resource> res(new Resource);
        if (true) {
            throw -1;
        }
    }
    catch(...) {
    }
    
//    Resource *res = new Resource;       // dull pointer
    
    AutoPtr<Resource> res(new Resource);   // smart pointer
    
//    delete res;
    
    return;
}

int main() {
    
    using namespace std;
    
//    doSomething();
    
    {
        AutoPtr<Resource> res1(new Resource);
        AutoPtr<Resource> res2;
        
        cout << std::boolalpha;
        
        cout << res1.m_ptr << endl;
        cout << res2.m_ptr << endl;
        
        res2 = res1;
        
        cout << res1.m_ptr << endl;
        cout << res2.m_ptr << endl;
    }
    
    return 0;
}
