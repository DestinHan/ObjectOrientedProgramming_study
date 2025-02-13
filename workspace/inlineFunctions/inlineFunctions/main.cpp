#include <iostream>

inline int min(int x, int y) {
    
    return x > y ? y : x;
    
}

int main() {
    
    using namespace std;
    
    cout << min(5, 6) << endl;
    cout << min(3, 2) << endl;
    
    cout << (5 > 6 ? 6 : 5) << endl;        // inline function works like this
    
    return 0;
}
