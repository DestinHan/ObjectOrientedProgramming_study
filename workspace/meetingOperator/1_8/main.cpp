// Literal, Operand, unary, binary, ternary
#include <iostream>

using namespace std;

int add(int x, int y) {
    
return x + y;   // no indenting.. never do this
    
}

int main(void) {
    
    int x = 2; // x is a variable, 2 is a literal
               // = is assignment
    
    int my_v        = 1;
    int z           = 4;
    int num_apples  = 123;  // hard coding
    
    
    
    cout << x + 2 << endl;  //x and 2 is operand, + is binary
    cout << -x << endl;     // - is unary
    
    int y = (x > 0) ? 1 : 2;    // ternary
    cout << y << endl;
    
    return 0;
    
}
