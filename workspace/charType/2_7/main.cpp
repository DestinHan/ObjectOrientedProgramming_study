#include <iostream>

int main(void) {
    
    using namespace std;
    
    char c1(65);    // ASCII CODE
    char c2{'A'};
    
    cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl;
    
    // c-style casting
    cout << (char)65 << endl;
    cout << (int)'A' << endl;
    
    // cpp style
    cout << char(65) << endl;
    cout << int('A') << endl;
    
    cout << static_cast<char>(65) << endl;  // A
    cout << static_cast<int>('A') << endl; // A
    
//    char char1(65);
    
//    cin >> c1;
//    cout << char1 << " " << static_cast<int>(c1) << endl;
    
    cout << "Tab\tTab\t\"doubleQuotation\"" << endl;
    
    cout << "HEllo, \u0444!\n";
    
    return 0;
}
