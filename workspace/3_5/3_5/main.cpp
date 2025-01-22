#include <iostream>
#include <cmath>

int main(void) {
    
    using namespace std;
    
    int x, y;
    cin >> x >> y;
    cout << "Your input values are : " << x << " " << y << endl;
    
    if (x == y) {
        cout << "equal" << endl;
    }
    if (x != y) {
        cout << "not equal" << endl;
    }
    if ( x > y) {
        cout << "x is greater than y" << endl;
    }
    if ( x < y) {
        cout << "x is less than y" << endl;
    }
    if ( x >= y ) {
        cout << "x is greater than y or equal to y" << endl;
    }
    if (x <= y) {
        cout << "x is less than or equal to y" << endl;
    }
    
    double d1(100 - 99.99); // 0.001
    double d2(10 - 9.99);   // 0.001
    
    if (d1 == d2)
        cout << "equal" << endl;
    else {
        cout << "Not equal" << endl;    // output: Not equal
        
        if (d1 > d2) cout << "d1 > d2" << endl;
        else // if(d1 < d2) because d1 != d2
            cout << "d1 < d2" << endl;  // output: d1 > d2
        
    }
    
    cout << d1 << endl; // 0.001
    cout << d2 << endl; // 0.001
    cout << std::abs(d1 - d2) << endl;  // output: 5.32907e-15
                                        // abs(): absolute value
    
    const double epsilon = 1e-10;
    
    if(std::abs(d1 - d2) < epsilon)
        cout << "Approximately equal" << endl;
    else
        cout << "Not equal" << endl;
    
    return 0;
}
