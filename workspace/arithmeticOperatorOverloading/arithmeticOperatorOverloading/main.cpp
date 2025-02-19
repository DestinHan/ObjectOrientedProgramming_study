#include <iostream>

class Cents {
    
private:
    int m_cents;
    
public:
    Cents() {}
    Cents(int cents) : m_cents(cents) {}
    
    int getCents() const {
        return m_cents;
    }
    
    int& getCents() {
        return m_cents;
    }
    
    friend Cents operator + (const Cents & c1, const Cents & c2){
        return Cents(c1.getCents() + c2.getCents());
    };
    
};

//Cents add(const Cents & c1, const Cents & c2) {
//    return Cents(c1.getCents() + c2.getCents());
//}

//Cents operator + (const Cents & c1, const Cents & c2) {
//    return Cents(c1.getCents() + c2.getCents());
//}

int main() {
    
    using namespace std;
    
    Cents cents1(6);
    Cents cents2(7);
    
//    cout << add(cents1, cents2).getCents() << endl;
    cout << (cents1 + cents2 + Cents(6) + Cents(10)).getCents() << endl;
    
    return 0;
}
