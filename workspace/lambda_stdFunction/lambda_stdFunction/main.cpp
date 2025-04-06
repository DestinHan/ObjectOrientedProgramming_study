#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

void goodbye(const std::string & s) {  }

class Object { 
public:
    void hello() {
        
    }
};

int main() {
    
    using namespace std;
    
    // lambda-introducer
    // lambda-parameter-declaration
    // lambda-return-type-clause
    // compound-statement
    
    auto func = [](const int& i) -> void { cout << "Hello, World!" << endl; };
    
    func(123);
    
    [](const int& i) -> void { cout << "Hello, World!" << endl; } (1234);
    
    {
        string name = "JackJack";
        [&]() {std::cout << name << std::endl;} ();     // & capture name as referance
    }
    
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    
    auto func2 = [](int val) { cout << val << endl; };
    for_each(v.begin(), v.end(), [](int val) { cout << val << " "; });
    cout << endl;
    
    cout << []() -> int { return 1; } () << endl;
    
    std::function<void(int)> func3 = func2;             // functor..
    func3(123);
    
    std::function<void(void)>func4 = std::bind(func3, 456);
    func4();
    
    {
        Object instance;
        auto f = std::bind(&Object::hello, &instance, std::placeholders::_1);
        
        f(string("World"));
        
        auto f2 = std::bind(&goodbye, std::placeholders::_1);
        
        f2(string("World"));
        
    }
    
    return 0;
}
