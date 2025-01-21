#include <iostream>



int main(void) {
    
    using namespace std;
    
    int x = 5;
    int y = --x;
    int z = x--;
    
    cout << y << endl;
    cout << z << endl;
    
    int a = 6, b = 6;
    
    cout << a << " " << b << endl;
    cout << a++ << " " << b-- << endl;
    cout << a << " " << b << endl;
    cout << ++a << " " << --b << endl;
    
    
    
    return 0;
}
