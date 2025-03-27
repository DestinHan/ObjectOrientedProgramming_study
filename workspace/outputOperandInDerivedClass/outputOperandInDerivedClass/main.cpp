#include <iostream>

class Base {
public:
    Base() {}
    
    friend std::ostream & operator << (std::ostream & out, const Base & b) {
        return b.print(out);
    }
    
    virtual std::ostream & print(std::ostream & out) const {
        out << "Base";
        return out;
    }
    
};

class Derived : public Base {
public:
    Derived() {}
    
    virtual std::ostream & print(std::ostream & out) const override {
        out << "Derived";
        return out;
    }
    
};

int main() {
    
    using namespace std;
    
    Base b;
    cout << b << '\n';
    
    Derived d;
    cout << d << '\n';
    
    Base &bref = d;
    cout << bref << '\n';
    
    return 0;
}
