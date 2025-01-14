#include <iostream>

namespace MySpace1 {
namespace innerSpace {

int doSomething(int a, int b) {
    
    return a + b;
    
}

}

}

namespace MySpace2 {

int doSomething(int a, int b) {
    
    return a - b;
    
    }

}

int main(void) {
    
    std::cout << MySpace1::innerSpace::doSomething(1, 2) << std::endl;
    std::cout << MySpace2::doSomething(1, 2) << std::endl;
    
    using namespace MySpace1::innerSpace;
    using namespace std;
    cout << doSomething(1, 2) << endl;
    
    return 0;
}
