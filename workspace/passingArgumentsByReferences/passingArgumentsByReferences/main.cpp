#include <iostream>
#include <vector>

typedef int* pint;

void addOne(int &y) {   // reference parameter
    std::cout << y << " " << &y << std::endl;
    y = y + 1;
}

void getSinCos(const double &degrees, double &sin_out, double &cos_out) { // if you use const, you can use reference in parameter with literal
    
    static const double pi = 3.141592;
    double radians = degrees * pi / 180.0;
    sin_out = std::sin(radians);
    cos_out = std::cos(radians);

}

void foo (pint &ptr) {
    
    std::cout << ptr << " " <<  &ptr << std::endl;
    
}

void printElement (vector<int>& arr) {
    
}

int main() {
    
    using namespace std;
    
    int x = 5;
    cout << x << " " << &x << endl;     // 5
    
    addOne(x);
    
    cout << x << " " << &x << endl;     // 6
    
    // getSinCos
    double sin(0.0);
    double cos = 0.0;
    getSinCos(30.0, sin, cos);
    
    cout << sin << " " << cos << endl;
    
    int x1 = 5;
    int* ptr = &x1;
    
    cout << ptr << " " << &ptr << endl;
    foo(ptr);
    
//    int arr[] { 1, 2, 3, 4 };
    vector<int> arr {1, 2, 3, 4};
    printElement(arr);
    
    return 0;
}
