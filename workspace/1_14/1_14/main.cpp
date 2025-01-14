#include <iostream>
#include <algorithm>

using namespace std;

#define MY_NUMBER 333 // macro
#define MY_STRING "Hello World"

#define LIKE_APPLE

int main(void) {
    
    cout << MY_NUMBER << endl;
    cout << MY_STRING << endl;

    cout << std::max(1+3, 2) << endl;   // max is inside of algorithm
    
#ifdef LIKE_APPLE
    cout << "Apple " << endl;
#endif
    
#ifndef LIKE_APPLE
    cout << "Orange " <<endl;
#endif
    
    return 0;
}
