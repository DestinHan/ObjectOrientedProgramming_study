#include <iostream>

void doSomething(int &lref) {
    std::cout << "L-value ref" << std::endl;
}

void doSomething(int &&ref) {
    std::cout << "R-value ref" << std::endl;
}

int getResult() {
    return 100 * 100;
}

int main() {
    
    using namespace std;
    
    int x = 5;
    int y = getResult();
    const int cs = 6;
    const int cy = getResult();
    
    // L-value references
    
    int &lr1 = x;       // Modifiable l-values
//    int &lr2 = cx;    // Non modifiable l-values
//    int &lr3 = 5;     // R-values
    
    const int &lr4 = x; // Modifiable l-values
    const int &lr5 = cs;// Non modifiable l-value
    const int &lr6 = 5; // R-values
    
    // R-value references
    
//    int &&rr1 = x;    // Modifiable l-values
//    int &&rr2 = cx;   // Non-modifiable l-values
    int &&rr3 = 5;      // R-values
    
    cout << rr3 << endl;
    rr3 = 10;
    cout << rr3 << endl;
    
//    const int &&rr4 = x;  // Modifiable l-values
//    const int &&rr5 = cx; // Non-modifiable l-values
    const int &&rr6 = 5;
    
    // L/R-value reference parameters
    doSomething(x);             // L-value
    //doSomething(5);
    doSomething(5);             // R-value
    doSomething(getResult());   // R-value
    
    return 0;
}
