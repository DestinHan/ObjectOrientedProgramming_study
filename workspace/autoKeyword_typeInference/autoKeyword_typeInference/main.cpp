#include <iostream>

auto add (int x, int y) {
    return x + (double)y;
}

int main(void) {
    
    using namespace std;
    
    auto a = 123;   // cannot be used without initialized
    
    auto d = 123.0;
    auto c = 1 + 2.0;
    
    cout << sizeof(c) << endl;
    
    auto result = add(1, 2);
    
    cout << sizeof(result) << endl;
    
    
    return 0;
}

// can't use auto in parameter
