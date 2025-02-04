#include <iostream>

int main(void) {
    
    using namespace std;
    
    cout << 1 << endl;
    cout << 2 << endl;
    // ...
    cout << 9 << endl;
    
    unsigned int count = 0;  // counter
    
    cout << "while-loop test" << endl;
    
    while (1){
        cout << count << endl;
        count++;

        if (count == 10) break;
    }
    
    // OVERFLOW
//    unsigned int count1 = 10;
//    
//    while (count1 >=0) {
//        if (count1 == 0) cout << "zero";
//        else cout << count1 << " ";
//        
//        count1--;
//    }
    while (count < 100) {
        if (count % 10 == 0) cout << "Hello " << count << endl;
        count++;
    }
    
    int outer_count = 0;
    
    while (outer_count <= 6) {
        
        int inner_count = 1;
        
        while (inner_count < outer_count){
            cout << inner_count++ << " ";
        }
        cout << endl;
        ++outer_count;
        
    }
    
    return 0;
}
