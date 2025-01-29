#include <iostream>
#include <typeinfo>

int main(void) {
    
    using namespace std;
    
    int a = 123;
    double b = 1.0;
    cout << typeid(a).name() << endl;
    cout << typeid(b).name() << endl;
    
    // numeric promotion
    float c = 1.0f;
    double d = c;
    
    // numeric conversion
    double e = 0.123456789;
    float f = e;
    
    cout << 5u - 10 << endl;    // u menas unsigned
    
    int i = static_cast<int>(7.0);
    
    cout << typeid(i).name() << endl;
    
    return 0;
}
