#include <iostream>
#include <string>

typedef int my_int;

int add(int x, int y) {
    
    return x + y;
    
}

double add(double x, double y) {
    
    return x + y;
    
}

// you can't overload if only return types diff..

void print(int x) {}
//void print(my_int x) {}

int main() {
    
    using namespace std;
    
    cout << add(1, 2) << " " << add(1.0, 2.7) << " " << endl;       // determines in compile time
    
    return 0;
}
