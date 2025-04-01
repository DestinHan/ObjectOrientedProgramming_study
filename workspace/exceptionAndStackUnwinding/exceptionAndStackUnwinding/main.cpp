#include <iostream>

// void last() throw(int) exception specifier
// void last() throw(...) exception specifier

void last() {
    
    std::cout << "Last" << std::endl;
    std::cout << "Throws exception" << std::endl;
    
    throw - 1;
    
    std::cout << "End last" << std::endl;   // code will never execute
    
}

void third() {
    std::cout << "Third" << std::endl;
    
    last();
    
    std::cout << "End third" << std::endl;
}

void second() {
    
    std::cout << "Second" << std::endl;
    
    try {
        third();
    }
    catch(double) {     // -1 ignore double
        std::cerr << "Second caught int exception" << std::endl;
    }
    
    std::cout << "End second" << std::endl;
    
}

void first() {
    std::cout << "first" << std::endl;
    
    try {
        second();
    }
    catch(int) {
        std::cerr << "first caught int exception" << std::endl;     // catches in here
    }
    
    std::cout << "End first" << std::endl;
    
}

int main() {
    
    using namespace std;
    
    cout << "Start" << endl;
    
    try {
        first();
    }
    catch(int) {
        //std::clog, std::cout, std::cerr(error)
        std::cerr << "main caught int exception" << endl;
    }
    
    cout << "End main" << endl;
    
    return 0;
}
