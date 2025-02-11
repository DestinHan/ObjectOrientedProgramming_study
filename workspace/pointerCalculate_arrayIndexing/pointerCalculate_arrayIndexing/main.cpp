#include <iostream>

int main() {
    
    using namespace std;
    
    int value = 7;
    int *ptr = &value;
    
    cout << uintptr_t(ptr - 1) << endl;     // ..12
    cout << uintptr_t(ptr) << endl;         // ..16
    cout << uintptr_t(ptr + 1) << endl;     // ..20
    cout << uintptr_t(ptr + 2) << endl;     // ..24
    
    int array[] = {9, 7, 5, 3, 1};
    for(int i=0; i<5; i++) {
        cout << array[i] << " " << (uintptr_t)&array[i] << endl;
    }
    
    int *ptrarr = array;
    for(int i=0; i<5; i++) {
        cout << *(ptrarr + i) << " " << (uintptr_t)(ptr + i) << endl;
    }
    
    char name[] = "Jack jack";
    
    const int n_name = sizeof(name) / sizeof(char);
    
    for (int i=0; i<n_name; i++) {
        cout << *(name+i) << endl;
    }
 
    return 0;
}
