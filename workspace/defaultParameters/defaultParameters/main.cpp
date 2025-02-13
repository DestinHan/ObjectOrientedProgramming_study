#include <iostream>

void print(int x, int y, int z);      // in header file

void print(int x = 1024, int y = 2, int z = 1) {     // default parameter
    
    std::cout << x << " " << y << " " << z << std::endl;
    
}

void print1(std::string str) {}
void print1(char ch = ' ') {}

int main() {
    
    using namespace std;
    
    print(10);      // 10
    print();        // 1024 2 1
    
    return 0;
}
