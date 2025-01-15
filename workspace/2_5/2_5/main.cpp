#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

using namespace std;

int main(void) {
    
    float f(3.141592);  // 3.14 = 31.4 * 0.1
    double d{ 3.141592 };
    long double ld{ 3.141592 };
    
    cout << numeric_limits<float>::max() << endl;
    cout << numeric_limits<double>::max() << endl;
    cout << numeric_limits<long double>::max() << endl;
    
    cout << 3.14 << endl;
    cout << 31.4e-1 << endl; // e-1 = *10^-1
    cout << 31.4e-2 << endl;
    cout << 31.4e1 << endl;
    cout << 31.4e2 << endl;
    
    double zero = 0.0;
    double posinf = 5.0 / zero;
    double neginf = 5.0 / zero;
    double nan = zero / zero;
    
    cout << posinf << " " << isnan(posinf) << endl;
    cout << neginf << " " << isnan(neginf) << endl;
    cout << nan << " " << isnan(nan) << endl;
    
    cout << isnan(1.0) << endl;
    
    
    return 0;
}
