#include <iostream>
#include <vector>

int main() {
    using namespace std;
    
    std::vector<int> nums = {1, 2, 3};
    
    // Spawn the iterator
    for (auto it = nums.begin(); it != nums.end(); ++it) {
        cout << *it << " ";
    }

    cout << endl;

    auto it = nums.begin();
    // Move to the second element
    ++it;
    nums.insert(it, 10);    // Insert 10 before 2

    for (auto it = nums.begin(); it != nums.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    it = nums.begin();      // has to reset again to modify again..
    it += 2;
    nums.insert(it, 11);
    
    for (auto it = nums.begin(); it != nums.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    return 0;
}
