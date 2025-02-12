#include <iostream>

// void pointer(generic pointer)

enum Type {
    
    INT,
    FLOAT,
    CHAR,
    
};

int main() {
    
    using namespace std;
    
    int     i = 5;
    float   f = 3.0;
    char    c = 'a';
    
    void *ptr = nullptr;
    
    ptr = &i;
    ptr = &f;
    ptr = &c;
    
    Type type = FLOAT;
    
//    cout << ptr + 1 << endl;  can't do pointer calculation
    
    cout << &f << " " << ptr << endl;
//    cout << *ptr << endl;     can't dereference
    if (type == FLOAT){
        cout << *static_cast<float*>(ptr) << endl;
    }
    else if (type == INT) {
        cout << *static_cast<int*>(ptr) << endl;
    }
    
    return 0;
}
