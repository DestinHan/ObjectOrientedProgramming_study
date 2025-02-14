#include <iostream>
//#include <array>
#include <vector>

// vector array "delete" itself!! no memory leak.

int main() {
    
    using namespace std;
    
    // std::array<int, 5> array;
    std::vector<int> array;     // dynamic array
    
    std::vector<int> array2 = { 1, 2, 3, 4, 5 };
    
    cout << array2.size() << endl;
    
    std::vector<int> array3 = { 1, 2, 3, };
    
    cout << array3.size() << endl;
    
    std::vector<int> array4 { 1, 2, 3, };       // uniform initialization
    
    cout << array4.size() << endl;
    
    vector<int> arr = {1, 2, 3, 4, 5};
    
    for (auto &itr : arr) {
        cout << itr << " ";
    }
    cout << endl;
    
    // resize
    arr.resize(2);
    cout << arr.size() << endl;
    
    for (auto& itr : arr) {
        cout << itr << " ";
    }
    cout << endl;
    
    
    
    return 0;
}
