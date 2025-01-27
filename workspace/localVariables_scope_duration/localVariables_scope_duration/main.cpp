#include <iostream>

namespace work1 {
    namespace work11{       // nested namespace
        int a = 1;
        void doSomething() {
            a += 3;
        }
    }
}

namespace work2 {
    int a = 1;
    void doSomething() {
        a += 4;
    }
}

int main(void) {
    
    using namespace std;
    
    // apple = 1; undefined
    
    int apple = 5;
    
    cout << apple << endl;  // 5
    
    {
        cout << apple << endl;  // 5
        apple = 1;
        int apple = 2;  // this variable only exists inside of bracket (shadowing)
        cout << apple << endl;  // 2
    }
    
    cout << apple << endl;  // 1
    
    
    work1::work11::doSomething();
    cout << work1::work11::a << endl;
    
    work2::doSomething();
    cout << work2::a << endl;
    
    return 0;
}

// apple = 3; undefined
