#include <iostream>

//int getMax(int x, int y) {
//    return (x > y) ? x : y;
//}
//
//double getMax(double x, double y) {
//    return (x > y) ? x : y;
//}
//
//char getMax(char x, char y) {
//    return (x > y) ? x : y;
//}
//
//float getMax(float x, float y) {
//    return (x > y) ? x : y;
//}

template<typename T>
T getMax(T x, T y) {
    return (x > y) ? x : y;
}

int main() {
    
    using namespace std;
    
    cout << getMax(1, 2) << endl;       // integer type instance
    cout << getMax(1.2, 1.3) << endl;   // double type instance
    
    return 0;
}
