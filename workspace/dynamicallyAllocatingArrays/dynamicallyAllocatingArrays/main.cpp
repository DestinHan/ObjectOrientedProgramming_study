#include <iostream>

int main() {

    using namespace std;
    
    int length;
    cin >> length;
    
    int *array = new int[length] {11, 22, 33, 44, 55, 66};
    
    array[0] = 1;
    array[1] = 2;
    
    for (int i=0; i<length; i++) {
        cout << (uintptr_t)&array[i] << endl;
        cout << array[i] << endl;
    }
    
    delete [] array;
    
//    int fixedArray[] = {1, 2, 3, 4, 5};
    
    int *array1 = new int[3]{ 1, 2, 3 };
    
    for (int i=0; i<3; i++) {
        cout << array1[i] << endl;
    }
    
    delete [] array1;
    
    return 0;
}

