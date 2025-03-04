#include <iostream>

class Cents {
    
private:
    int m_cents;
    
public:
    Cents(int cents = 0) : m_cents(cents) {}
    
    int getCents() {
        return m_cents;
    }
    
    void setCents(int cents) {
        m_cents = cents;
    }
    
    operator int() {
        std::cout << "cast here" << std::endl;
        return m_cents;
    }
    
};

void printInt(const int& value) {
    std::cout << value << std::endl;
}

int main() {
    
    using namespace std;
    
    Cents cents(7);
    printInt(cents);
    
    
    
    return 0;
}
