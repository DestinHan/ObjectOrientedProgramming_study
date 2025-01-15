#include <iostream>
#include <cmath>
#include <limits>
// #include <cstdint> -> already in iostream

using namespace std;

void my_function(void);

int main(void) {
    
    short s = 1;
    int i = 1;
    long l = 1;
    long long ll = 1;
    
    cout << pow(2, sizeof(s) * 8 - 1) - 1 << endl;  // 2 bytes = 2 * 8 bits = 16 bits
    cout << numeric_limits<short>::max() << endl;
    cout << numeric_limits<short>::min() << endl;
    cout << numeric_limits<short>::lowest() << endl;
    
    s = 32767;
    s = s+1; // 32768 (++s, s++)
    
    cout << "32768? " << s << endl;     // overflow
    
    s = numeric_limits<short>::min();
    s = s - 1;
    
    cout << "-32769? " << s << endl;    // over flow
    
    return 0;
}

void my_function(void) {
    
    
    
}
