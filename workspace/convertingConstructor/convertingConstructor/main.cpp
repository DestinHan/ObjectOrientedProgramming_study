#include <iostream>
#include <cassert>
class Fraction {
    
private:
    int m_numerator;
    int m_denominator;
    
public:
    Fraction(char) = delete;    // prevent char
    
    explicit Fraction(int num = 0, int den = 1) : m_numerator(num), m_denominator(den) {
        assert(den != 0);
    }
    
    Fraction(const Fraction &fraction) // copy constructor
    : m_numerator(fraction.m_numerator), m_denominator(fraction.m_denominator) {
        std::cout << "Copy construcor called" << std::endl;
    }
    
    friend std::ostream & operator << (std::ostream & out, const Fraction & f) {
        out << f.m_numerator << " / " << f.m_denominator << std::endl;
        return out;
    }
    
};

void doSomething(Fraction frac) {
    std::cout << frac << std::endl;
}

int main() {
    
    using namespace std;
    
    Fraction frac(7);
    doSomething(frac);
//    doSomething(7);   explicitly...
//    Fraction frac2('c');  delete...
    
    
    return 0;
}
