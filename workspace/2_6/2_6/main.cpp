#include <iostream>

bool isEqual(int a, int b) {
    
    bool result = (a == b); // if a == b then result value is true
    
    return result;
}

int main(void) {
    
    using namespace std;
    
    bool b1 = true; // copy initialization
    bool b2(false); // direct initialization
    bool b3 { true }; // uniform initialization
    b3 = false;
    
    cout << boolalpha << endl;
    cout << !b1 << endl;
    cout << !b2 << endl;
    
    cout << (true && true) << endl;
    cout << (true && false) << endl;
    cout << (false && false) << endl;   // code will never be executed
    
    if (false) {
        cout << "This is true" << endl;
        cout << "True second line " << endl;
    }
    else {
        cout << "This is false" << endl;
    }
    
    cout << isEqual(1, 2) << endl;
    
    if (5) {
        cout << "True" << endl;
    }
    else
        cout << "False" << endl;
    
    bool b;
    cin >> b;
    cout << "Your input : " << b << endl;
    
    int userInput = 0;
    
    cout << "Write odd or even number plz : ";
    cin >> userInput;
    
    if (userInput % 2 == 0) {
        cout << "even" << endl;
    }
    else {
        cout << "odd" << endl;
    }
    
    return 0;
}
