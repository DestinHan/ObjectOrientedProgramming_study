#include <iostream>
#include <vector>
#include <algorithm>

class Cents {
    
private:
    int m_cents;
    
public:
    Cents () {}
    Cents(int cents) : m_cents(cents) {}
    
    int getCents() const { return m_cents; }
    int& getCents() { return m_cents; }
    
    friend bool operator == (const Cents &c1, const Cents &c2) {
        return c1.m_cents == c2.m_cents;
    }
    
    friend std::ostream& operator << (std::ostream &out, const Cents &cents) {
        out << cents.m_cents;
        return out;
    }
    
};

int main() {
    
    using namespace std;
    
    Cents cents1(6);
    Cents cents2(0);
    
    if (cents1 == cents2)
        cout << "Equal" << endl;

    cout << std::boolalpha;
    
    std::vector<Cents>arr(20);
    
    for (unsigned i = 0u; i<20; ++i) {
        arr[i].getCents() = i;
    }
    
    for (auto& ele : arr) {
        cout << ele << endl;
    }
    
    return 0;
}
