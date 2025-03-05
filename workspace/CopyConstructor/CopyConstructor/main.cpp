#include <iostream>
#include <cassert>

class Fraction {
    
private:
    int m_numerator;
    int m_denominator;
    
public:
    Fraction(int num = 0, int den = 1) : m_numerator(num), m_denominator(den) {
        assert(den !=0);
    }
    
    Fraction(const Fraction &fraction) // copy constructor
    : m_numerator(fraction.m_numerator), m_denominator(fraction.m_denominator) {
        std::cout << "Copy constructor called" << std::endl;
    }
    
    friend std::ostream & operator << (std::ostream & out, const Fraction & f) {
        out << f.m_numerator << " / " << f.m_denominator << std::endl;
        return out;
    }
    
};

int main() {
    
    using namespace std;
    
    Fraction frac(3, 5);
    
    Fraction fr_copy(frac);
    
    cout << frac << " " << fr_copy << endl;
    
    return 0;
}
