#include <iostream> // cout, cin, endl, ...
#include <cstdio>   // printf

int main(void) {
    
    using namespace std;
    
    int x = 1024;
    double pi = 3.141592;
    int y = 1;
    
    std::cout << "I love this lecture!\n" << std::endl;    // << : output operator
    std::cout << "x is " << x << " " << "pi is " << pi << std::endl;
    
    std::cout << "abc" << "\t" << "def" << std::endl;
    cout << "ab" << "\t" << "cdef" << endl;
    
    printf("I hate this lecture\n");
    
    cout << "Your input before : " << y << endl;
    cin >> y;
    cout << "Your input is now " << y << endl;
    
    return 0;
}
