#include <iostream>
#include <string>

int main() {
    
    using namespace std;
    
    // semantic errors
    int x;
    cin >> x;
    
    if(x >= 5) {
        cout << "x is greater than 5" << endl;
    }
    
    // violated assumption
    
    string hello = "Hello, my name is Jack jack";
    
    cout << "Input from 0 to " << hello.size() - 1 << endl;
 
    int ix;
    
    
    while (1){
        
        cin >> ix;
        
        if (ix >= 0 && ix <= hello.size() -1) {
            cout << hello[ix] << endl;
            break;
        }
        else {
            cout << "please try again" << endl;
        }
    }
    
    cout << hello[ix] << endl;
    
    return 0;
}
