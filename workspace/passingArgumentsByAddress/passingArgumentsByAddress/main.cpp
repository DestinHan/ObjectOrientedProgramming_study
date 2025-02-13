#include <iostream>

typedef int* pint;

void foo(pint ptr) {
    *ptr = 7;
    std::cout << *ptr << " " << ptr << " " << &ptr << std::endl;
}

int main() {
    
    using namespace std;
    
    int value = 5;
    
    cout << value << " " << &value << endl;
    
    int *ptr = &value;
    
    foo(ptr);
    foo(&value);
    cout << value << " " << &value << endl;
    
    return 0;
}
