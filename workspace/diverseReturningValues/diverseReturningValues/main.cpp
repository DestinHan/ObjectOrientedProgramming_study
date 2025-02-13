#include <iostream>
#include <array>
#include <tuple>

int getValue(int x) {
    
    int value = x * 2;
    return value;
    
}

int* allocateMemory(int size) {
    
    return new int[size];
    
}

int& get(std::array<int, 100>& my_array,int ix) {
    
    return my_array[ix];
    
}

std::tuple<int, double> getTuple() {
    
    int a = 10;
    double d = 3.14;
    return std::make_tuple(a, d);
    
}

int main() {
    
    using namespace std;
    
    int value = getValue(3);
    
    cout << value << endl;
    
    int* array = allocateMemory(1024);
    
    delete[] array;
    
    std::array<int, 100> my_array;
    my_array[30] = 10;
    
    get(my_array, 30) = 1024;
    
    cout << get(my_array, 30) << endl;
    cout << my_array[30] << endl;
    
    std::tuple<int, double> my_tp = getTuple();
    std::get<0>(my_tp);     // a
    std::get<1>(my_tp);     // d
    
    return 0;
}
