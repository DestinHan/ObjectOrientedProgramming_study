#include <iostream>

int pow(int base, int exponent) {
    int result = 1;
    
    for (int count = 0; count < exponent; ++count){
        result *= base;
    }
    
    return result;
}

int main(void) {
    
    using namespace std;
    
    for(int count = 0; count < 10; ++count) {
        cout << count << endl;
    }
    
    int count = 0;
    for(; count < 10; ++count) {
        cout << count << endl;
    }
    
    cout << pow(2, 4) << endl;

    for(int count = 9; count >= 0; count -= 2) {
        cout << count << endl;  // 9 7 5 3 1
    }
    
    for(int i=0, j=0; i < 10; ++i, --j) {
        cout << i << " " << j << endl;
    }
    
    return 0;
}
