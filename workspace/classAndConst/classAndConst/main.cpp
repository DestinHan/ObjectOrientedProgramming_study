#include <iostream>

class Something {
    
private:
    int m_value;
    
public:
    int m_value1 = 1;
    Something(int value_in) : m_value(value_in) {}
    
    Something() { std::cout << "constructor" << std::endl; }
    
    void setValue(int value) { m_value = value; }
    int getValue() const { return m_value; };
    void print() { std::cout << m_value << std::endl;}
};

void print(const Something &st) {
    std::cout << st.m_value1 << std::endl;
}

int main() {
    
    using namespace std;
    
    Something something;
    
    something.print();
    something.setValue(3);
    something.print();
    
    print(something);
    
    return 0;
}
