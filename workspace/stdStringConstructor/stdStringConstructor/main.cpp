#include <iostream>
#include <string>
#include <vector>
#include <sstream>

template <typename T>
std::string ToString(T x) {
    std::ostringstream osstream;
    
    osstream << x;
    return osstream.str();
}

int main() {
    
    using namespace std;
    
    std::string my_string( "my string");
    
    std::string second_string(my_string, 3, 5);     // erase first 3 and get 5 letters
    
    cout << my_string << endl;
    
    cout << second_string << endl;
    
    std::vector<char> vec;
    
    for(auto e : "Today is a good day.") {
        vec.push_back(e);
    }
    std::string vec_string(vec.begin(), vec.end());
    
    cout << vec_string << endl;
    
    std::string vec_string1(vec.begin(), std::find(vec.begin(), vec.end(), 'y'));
    
    cout << vec_string1 << endl;
    
    std::string my_str(std::to_string(1004));
    
    cout << my_str << endl;
    
    int i = std::stoi(my_str);      // string to integer
    cout << i << endl;
    
    return 0;
}
