#include <iostream>

void doSomething(int &n) {
    n = 10;
    std::cout << "In doSomething " << n << std::endl;
}

void printElements(int (&arr)[5]){  // array reference, elements number needed
    for (int i=0; i<5; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

struct Something {
    
    int v1;
    float v2;
    
};

struct Other {
    
    Something st;
    
};

int main() {
    
    using namespace std;
    
    int value = 5;
    
//    int *ptr = nullptr;
//    ptr = &value;
    
    int &ref = value;       // reference must initialized with variable name(L value)
    
    cout << ref << endl;
    
    ref = 10;   // *ptr = 10;
    cout << value << " " << ref << endl;    // 10 10
    
    cout << &value << endl;     // same address
    cout << &ref << endl;       // same address
    
    int value1 = 5;
    int value2 = 10;
    
    int &ref1 = value1;
    cout << ref1 << endl;
    
    ref1 = value2;
    cout << ref1 << endl;
    
    int n = 5;
    cout << n << endl;
    doSomething(n);         // 10, the variable n itself goes inside of function
    
    cout << n << endl;      // 10 by reference
    
    // Array
    const int length = 5;
    int arr[length] = { 1, 2, 3, 4, 5};
    
    printElements(arr);
    
    // structure
    Other ot;
    
    int &v1 = ot.st.v1;
    v1 = 1; // ot.st.v1 = 1
    
    // reference vs pointer
    int valuee = 5;
    int *ptr = &valuee;
    int &reff = valuee;
    
    cout << valuee << " " << *ptr << " " << reff << endl;
    *ptr = 10;
    cout << valuee << " " << *ptr << " " << reff << endl;
    reff = 11;
    cout << valuee << " " << *ptr << " " << reff << endl;
    
    return 0;
}
