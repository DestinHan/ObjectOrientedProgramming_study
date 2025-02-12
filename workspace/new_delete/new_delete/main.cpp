#include <iostream>

int main() {
    
    using namespace std;
    
    int array[1000000];     // stack memory (static)
    
//    int var;
//    var = 7;
    int *ptr = new int { 7 };
//    *ptr = 7;
    int *ptr2 = ptr;
    
    cout << ptr << endl;
    cout << *ptr << endl;   // 7
    
    delete ptr;
    
    cout << "After delete" << endl;
    cout << ptr << endl;    // address is same
    cout << *ptr << endl;   // unknown value..
    
    ptr = nullptr;
    
    if (ptr != nullptr) {
        cout << ptr << endl;
        cout << *ptr << endl;
    }
    else {
        cout << "Could not allocate memory" << endl;
    }
    
    // *ptr2
    ptr2 = nullptr;
    
    // memory leak
    while (true) {
        int *ptr = new int;
        cout << ptr << endl;
        delete ptr;          // must delete to avoid memory leak
    }
    
    
    return 0;
}
