#include <iostream>

void printArray(int array[]) {
    
    std::cout << sizeof(array) << std::endl;
    
}

struct Mystruct {
    int arrData[5] = {9, 7, 5, 3, 1};
};

void doSomething(Mystruct ms1) {
    std::cout << sizeof(ms1.arrData) << std::endl;
}

int main() {
    
    using namespace std;
    
    int array[5] = {9, 7, 5, 3, 1};
    
    cout << array[0] << " " << array[1] << endl;
    cout << array << endl;
    cout << &(array[0]) << endl;
    cout << &array[1] << endl;      // 4byte int
    
    cout << *array << endl;         // 9
    
    char name[] = "jackjack";
    cout << *name << endl;
    
    int *ptr = array;
    cout << ptr << endl;
    cout << *ptr << endl;
    
    cout << sizeof(array) << endl;  // 20
    cout << sizeof(ptr) << endl;    // 8
    
    printArray(array);              // 8
    
    cout << array[0] << " " << *array << endl;
    
    Mystruct ms;
    cout << ms.arrData[0] << endl;  // 9
    
    doSomething(ms);                // 20
    
    return 0;
}
