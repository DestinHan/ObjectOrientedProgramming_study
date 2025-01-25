#include <iostream>

using namespace std;

int main(void) {
    
    int x = 4;
    int y = 5;
    int z = x % y;
    
    cout << x / y << " " << z << endl;
    cout << float(x) / y << endl;
    cout << x / float(y) << endl;
    cout << float(x) / float(y) << endl;
    
    cout << -5 / 2 << endl;
    
    int aa = x;
    cout << aa << endl;
    
    aa += y; // aa = aa + y;
    aa %= y; // aa = aa % y;
    
    cout << aa << endl;
    
    return 0;
}
