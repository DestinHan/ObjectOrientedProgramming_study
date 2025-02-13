#include <iostream>
#include <array>
#include <algorithm>

void printLength(const std::array<int, 5> my_arr) {
    std::cout << my_arr.size() << std::endl;
}

int main() {
    
    using namespace std;
    
//    int arrData[5] = { 1, 2, 3, 4, 5 };
    
    std::array<int, 5> my_arr = { 1, 21, 3, 40, 5 };
    
    my_arr = { 0, 1, 2, 3 };
    
    cout << my_arr[1] << endl;
    cout << my_arr.at(1) << endl;   // check when error occurs (little slower)
    
    cout << my_arr.size() << endl;  // 5
    
    printLength(my_arr);            // 5
    
    for(auto &element : my_arr) {
        cout << element << " ";
    }
    cout << endl;
    
    std::sort(my_arr.begin(), my_arr.end());    // sorting
    for(auto &element : my_arr) {
        cout << element << " ";
    }
    
    
    
    return 0;
}
