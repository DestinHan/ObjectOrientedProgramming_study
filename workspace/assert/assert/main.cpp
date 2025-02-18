#include <cassert> // assert.h
#include <array>
#include <iostream>

void printValue(const std::array<int, 5> &my_array, const int &ix){
    assert(ix >= 0);
    assert(ix <= my_array.size() - 1);
    std::cout << my_array[ix] << std::endl;
}

int main() {
    
    using namespace std;
    
    std::array<int,5> my_array{ 1, 2, 3, 4, 5 };
    printValue(my_array, 100);
    
    return 0;
}
