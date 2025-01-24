#include <iostream>
#include <bitset>

int main(void) {
    
    using namespace std;
    
    // << left shift
    // >> right shift
    // ~, &, |, ^
    
    unsigned int a = 1;
    
    cout << std::bitset<4>(a) << endl;  // 0001
    cout << std::bitset<4>(2) << endl;  // 0010
    
    unsigned int b = a << 1;
    
    cout << std::bitset<4>(b) << " " << b << endl;  // left shift, 0001 -> 0010 = 6
    
    cout << std:: bitset<8>(a << 1) << " " << (a << 1) << endl;
    cout << std:: bitset<8>(a << 2) << " " << (a << 2) << endl;
    cout << std:: bitset<8>(a << 3) << " " << (a << 3) << endl;
    cout << std:: bitset<8>(a << 4) << " " << (a << 4) << endl;
    
    cout << std::bitset<16>(~a) << " " << (~a) << endl;
    
    unsigned int ba = 0b0011;
    cout << ba << endl;
    
    cout << std::bitset<4>(a & b) << endl;
    cout << std::bitset<4>(a | b) << endl;
    cout << std::bitset<4>(a ^ b) << endl;
    
    
    
    
    return 0;
}
