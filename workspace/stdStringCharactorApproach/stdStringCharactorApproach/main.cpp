#include <iostream>
#include <string>
#include <vector>

int main() {
    
    using namespace std;
    
    std::string my_str("abcdefg");
    
    cout << my_str[0] << endl;
    cout << my_str[3] << endl;
    
    my_str[3] = 'Z';
    
    cout << my_str << endl;
    
    try {
//        my_str[100] = 'X';
        my_str.at(100) = 'X';
    }
    catch (std::exception & e) {
        cout << e.what() << endl;
    }
    
    cout << my_str.c_str() << endl;
    cout << my_str.c_str()[6] << endl;
    
    return 0;
}
