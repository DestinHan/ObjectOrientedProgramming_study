#include <iostream>

void doSomething(int y) {
    std::cout << "In func " << y << " " << &y << std::endl;
}

int main() {
    
    using namespace std;
    
    doSomething(5);
    
    int x = 6;
    
    cout << "In main " << x << " " << &x << endl;
    
    doSomething(x);     // variable x's address is not passed
    doSomething(x + 1); // y's address, just value is passing
    
    return 0;
}
