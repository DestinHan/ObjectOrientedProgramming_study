#include <iostream>

void breakOrReturn() {
    while (true) {
        char ch;
        std::cin >> ch;
        
        if (ch == 'b') {
            break;
        }
        
        if (ch == 'r') {
            return;
        }
    }
}

int main(void) {
    
    using namespace std;
    
//    breakOrReturn();
    
    for (int i=0; i<10; ++i) {
        cout << i << endl;
        if(i == 5) break;
    }
    
    for (int i=0; i<10; ++i) {
        
        if (i % 2 == 0) continue;   // continue does not break for loop
        
        cout << i << endl;
    }
    
    int count(0);
    bool escape_flag = false;
    
    while (!escape_flag) {
        char ch;
        cin >> ch;
        
        cout << ch << " " << ++count << endl;
//        count++;
        
        if (ch == 'x') {
            escape_flag = true;
        }
        
    }
    
    return 0;
}
