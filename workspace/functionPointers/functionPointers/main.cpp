#include <iostream>
#include <array>
#include <functional>

int func() {
    
    return 5;
    
}

int goo() {
    
    return 10;
    
}

bool isEven(const int& number) {
    
    if (number % 2 == 0) {
        return true;
    }
    else {
        return false;
    }
}

bool isOdd(const int& number) {
    
    if (number % 2 != 0) {
        return true;
    }
    else {
        return false;
    }
}

void printNumbers(const std::array<int, 10> &my_array, bool (*check_fcn)(const int&)) {
    
    for(auto element : my_array) {
        if (check_fcn(element) == true) {
            std::cout << element;
        }
    }
    std::cout << std::endl;
    
}

int main() {
    
    using namespace std;
    
    func();
    
    int (*fcnptr)() = func;     // function pointer
    
    cout << fcnptr() << endl;
    
    fcnptr = goo;
    
    cout << fcnptr() << endl;   // 10
    
    std::array<int, 10> my_array { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    
    printNumbers(my_array, isEven);
    printNumbers(my_array, isOdd);
    
//    std::function<bool(const int&)> fcnptr1 = isEven;
    
    return 0;
}
