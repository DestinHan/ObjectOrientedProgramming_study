#include <iostream>
#include <exception>            // std::exception class
#include <string>

class CustomException : public std::exception {     // inheriting std::exception class
public:
    const char * what() const noexcept override {       // noexcept: not to throw any exception
        return "Custom exception";
    }
};

int main() {
    
    using namespace std;
    
    try {
        std::string s;
        s.resize(-1);
        
//        throw std::runtime_error("Bad thing happened");
        throw CustomException();
    }
    catch(std::exception & exception) {
        std::cout << typeid(exception).name() << std::endl;
        std::cerr << exception.what() << std::endl;
    }
    
    return 0;
}
