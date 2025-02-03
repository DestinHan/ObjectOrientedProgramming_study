#include <iostream>

int min(int x, int y) {
    
//    if (x > y) return y;
//    else return x;
    
    return (x > y) ? y : x;
    
}

int main(void) {
    
    using namespace std;
    
    int x;
    cout << "Enter integer : ";
    cin >> x;
    
    if(x > 10) {
        cout << x << " is greater than 10." << endl;
        cout << "Test 1" << endl;
    }
    else
        cout << x << " is lesser than 10." << endl;
    cout << "Test 2" << endl;   // run anyways
    
    if (1)
        int x = 5;  // local int x so it means nothing when its out from if
    else
        int x = 6;  // local int x so it means nothing when its out from if
    
    cout << x << endl;
        
    if (x > 10)
        cout << "x is greater than 10" << endl;
    else if (x < 10)
        cout << "x is less than 10" << endl;
    else
        cout << "x is exactly 10" << endl;
    
    int a, b;
    cin >> a >> b;
    
    if (a > 0 && b > 0)
        cout << "both numbers are positive" << endl;
    else if (a > 0 || b > 0)
        cout << "one of the number is positive" << endl;
    else
        cout << "neither numbers are positive" << endl;
    
    if (x > 10)
        cout << "A" << endl;
    else if (x == -1)
        return 0;   // program ends
    else if (x < 0)
        cout << "B " << endl;
    
    cout << "Hello" << endl;
    
    return 0;
}
