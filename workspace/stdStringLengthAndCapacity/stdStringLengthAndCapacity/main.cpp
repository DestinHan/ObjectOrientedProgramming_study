#include <iostream>
#include <string>
#include <vector>

int main() {
    
    using namespace std;
    
    string my_str("012345678");
    my_str.reserve(1000);
    
    cout << my_str.size() << endl;      // 9 (there's no null)
    cout << std::boolalpha;             // make output as "true" or "false"
    cout << my_str.empty() << endl;
    cout << my_str.length() << endl;
    cout << my_str.capacity() << endl;
    cout << my_str.size() << endl;
    cout << my_str.max_size() << endl;
    
    return 0;
}

