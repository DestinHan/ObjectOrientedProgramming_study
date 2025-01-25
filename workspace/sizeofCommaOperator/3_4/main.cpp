#include <iostream>

int main(void) {
    
    using namespace std;
    
//    float a;
//    
//    cout << sizeof(float) << endl;
//    cout << sizeof(a) << endl;
    
    // comma operator
    
    int x = 3;
    int y = 10;
    // int z = (++x, ++y);
    ++x;
    ++y;
    int z = y;
    
    cout << x << " " << y << " " << z << endl;
    
    int a = 1, b = 10;
    int c;
    
    c = a, b;   // (c = a), b
    c = (a, b); // c = b;
    c = (++a, a + b);
    
    cout << c << endl;
    
    // conditional operator (arithmetric if)
    
    bool onSale = true;
    
//    int price;
//    
//    if (onSale) {
//        price = 10;
//    }
//    else { price = 100; }
    
    const int price = (onSale == true) ? 10 : 100;
    
    cout << price << endl;
    
    int num = 5;
    
    cout << ((num % 2 == 0) ? "even" : "odd") << endl;
    
    return 0;
}
