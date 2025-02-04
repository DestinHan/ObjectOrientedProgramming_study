#include <iostream>
#include <cmath>    // sqrt()
#include <iomanip>  // setprecision

int main(void) {
    
    using namespace std;
    
    double x;
    
    tryAgain : // label
    
    cout << "Enter a non-negative number : " << endl;
    cin >> x;
    
    if (x < 0.0)
        goto tryAgain;
    
    cout << fixed << setprecision(3) << sqrt(x) << endl; //square root
    
    
    return 0;
}
