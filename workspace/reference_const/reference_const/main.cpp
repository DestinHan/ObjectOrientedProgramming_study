#include <iostream>

void doSomething(const int& x){     // using reference with parameter
    std::cout << x << std::endl;
}

int main() {
    
    using namespace std;
    
    int x = 5;
    int &ref_x = x; // reference must be Lvalue, but const reference can
    
    const int &ref = 3 + 4;
    
    int a = 1;
    doSomething(a);
    doSomething(1);
    doSomething(3*4);
    
    
    return 0;
}
