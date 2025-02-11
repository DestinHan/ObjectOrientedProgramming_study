#include <iostream>
#include <string>

int main() {
    
    using namespace std;
    
    const char *name = "Jack Jack";
    const char *name2 = "Jack Jack";
    
    cout << name << endl;
    cout << (uintptr_t)name << endl;    // same address
    cout << (uintptr_t)name2 << endl;   // same address
    
    char c = 'Q';
    cout << &c << endl;
    
    return 0;
}
