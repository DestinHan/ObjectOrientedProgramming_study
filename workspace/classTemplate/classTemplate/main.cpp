#include <iostream>
#include "MyArray.h"

int main() {
    
    using namespace std;
    
    MyArray<double> my_array(10);
    
    for (int i=0; i<my_array.getLength(); ++i) {
        my_array[i] = i * 10;
    }
    
    my_array.print();
    cout << my_array[1] << endl;
    
    return 0;
}
