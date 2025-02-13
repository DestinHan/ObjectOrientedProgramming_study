#include <iostream>

int foo(int x, int y);

int foo(int x, int y) {
    return x + y;
}   // x and y are destroyed here

int main() {
    
    using namespace std;
    
    int x = 1, y = 2;
    
    int result1 = foo(6, 7);  // 6, 7 : arguments (actual parameter)
    int result2 = foo(x, y+1);
    
    cout << result1 << " " << result2 << endl;
    
    
    
    return 0;
}
