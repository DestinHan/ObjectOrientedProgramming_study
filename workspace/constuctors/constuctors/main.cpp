#include <iostream>

class Fraction {
    
private:
    int m_numerator;
    int m_denominator;  //  member variables
    
public:
    
    Fraction() {
        m_numerator = 2;
        m_denominator = 1;
    }    // default constructor
    
    Fraction(const int& num_in, const int& den_in) {        // constructor
        m_numerator = num_in;
        m_denominator = den_in;
        
        std::cout << "Fraction() constructor" << std::endl;
    }
    
    void print() {
        int result = m_numerator/m_denominator;
        std::cout << m_numerator << " / " << m_denominator << " = " << result << std::endl;
    }
    
};

class Second {
    
public:
    Second(){
        std::cout << "class Second constructor()" << std::endl;
    }
    
};

class First {
    
    Second sec;     // Second class as member First class
  
public:
    First() {
        std::cout << "class First constructor()" << std::endl;
    }
    
};

int main() {
    
    using namespace std;
    
//    Fraction frac;
    Fraction one_thirds{ 1, 3 };
//    Fraction one_thirds(1.0, 3);
    
    one_thirds.print();
//    frac.print();
    
    First fir;
    
    return 0;
}
