#include <iostream>
#include "Storage.h"

template<typename T>
T getMax(T x, T y) {
    return (x > y) ? x : y;
}

template<>      // spaeialized template
char getMax(char x, char y) {
    std::cout << "Warning : Comparing char" << std::endl;
    return (x > y) ? x : y;
}



int main() {
    
    using namespace std;
    
    cout << getMax<int>(1, 2) << endl;
    cout << getMax('a', 'b') << endl;
    
    Storage<int> nValue(5);
    Storage<double> dValue(6.7);
    
    nValue.print();
    dValue.print();
    
    return 0;
}
