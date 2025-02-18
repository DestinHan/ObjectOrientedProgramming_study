#include <iostream>

class Something {
  
private:
    static int s_value;
    int m_value;
    
public:
    Something() : m_value(123) {}
    
    static int getValue() {
        return s_value;
    }
    
    int temp() {
        return this->s_value;
    }
    
};

int Something::s_value = 1024;

int main() {
    
    using namespace std;
    
    cout << Something::getValue() << endl;
    
    Something s1, s2;
    cout << s1.getValue() << endl;
//    cout << s1.s_value << endl;
    
    int (Something::*fptr1)() = &Something::temp;
    cout << (s2.*fptr1)() << endl;      // calling temp()
    
    int  (*fptr2)() = &Something::getValue;
    cout << fptr2() << endl;    // calling static getValue()
    
    
    
    return 0;
}

