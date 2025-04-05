#include "AutoPtr.h"
#include "Resource.h"

//AutoPtr<Resource> generateResource() {
//    AutoPtr<Resource> res(new Resource(10000000));
//    
//    return res;
//}

template<typename T>
void MySwap(T & a, T & b) {
//    T tmp = a;
//    a = b;
//    b = tmp;
    
    T tmp = std::move(a);
    a = b;
    b = tmp;
}

int main() {
    
    using namespace std;
    
    streambuf* orig_buf  = cout.rdbuf();
//    cout.rdbut(NULL);
    
//    Timer timer;
    
    {
        AutoPtr<Resource> res1(new Resource(100000000));
        
        cout << res1.m_ptr << endl;
        
        AutoPtr<Resource> res2 = std::move(res1);       // using move semantics
        cout << res1.m_ptr << endl;     // nullptr
        cout << res2.m_ptr << endl;
       
    }
    
    {
        AutoPtr<Resource> res1(new Resource(3));
        res1->setAll(3);
        
        AutoPtr<Resource> res2(new Resource(5));
        res2->setAll(5);
        
        res1->print();
        res2->print();
        
        MySwap(res1, res2);
        
        res1->print();
        res2->print();
    }
    
    {
        std::vector<string> v;
        std::string str = "Hello";
        
        v.push_back(str);
        
        cout << str << endl;
        cout << v[0] << endl;
        
        v.push_back(std::move(str));
        
        cout << str << endl;                // empty...
        cout << v[0] << " " << v[1] << endl;
    }
    
    cout.rdbuf(orig_buf);
//    cout << timer.elapsed << endl;
    
    return 0;
}
