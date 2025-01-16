#include <iostream>

#define NUM_ITEMS 123

int main(void) {
    
    using namespace std;
    
    float pi = 3.14f;
    int i = 12324;
    
    unsigned int n = 5u;
    long n2 = 5L;
    double d = 6.03-10;
    
    //Decimal   : 0 1 2 3 4 5 6 7 8 9 10
    //Octal     : 0 1 2 3 4 5 6 7 10 11 12 13
    //Hexa      : 0 1 2 3 4 5 6 7 8 9 A B C D E F 10
    
    int x = 012;
    cout << x << endl;
    int x1 = 0xF;
    cout << x1 << endl;
    
    int price = NUM_ITEMS * 10;
    cout << price << endl;
    
    
    
    return 0;
}
