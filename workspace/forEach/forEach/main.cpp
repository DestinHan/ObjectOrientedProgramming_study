#include <iostream>
#include <limits>
#include <algorithm>
#include <vector>

int main() {
    
    using namespace std;
    
    int fibonacci[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };
    
    for (int number : fibonacci){
        cout << number << " ";
    }
    cout << endl;
    
    // change array values
    for (auto& number : fibonacci){
        number = 10;
    }
    cout << endl;
    
    // output
    for (int number : fibonacci){
        cout << number << " ";
    }
    cout << endl;
    
    vector<int> fibonacci1 = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };
 
    int max_number = std::numeric_limits<int>::lowest();
    for (const auto &n : fibonacci1){
        max_number = std::max(max_number, n);
    }
    cout << max_number << endl;
    
    return 0;
}
