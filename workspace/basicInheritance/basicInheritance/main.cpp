#include <iostream>

class Mother {
    
private:      // unaccessible to child class
//public:
//protected:
    int m_i;
    
public:
//    Mother() : m_i(0){}
    Mother(const int & i_in = 1) : m_i(i_in) {
        std::cout << "Mother constructor" << std::endl;
    }

    void setValue(const int& i_in) {
        m_i = i_in;
    }
    
    int getValue() {
        return m_i;
    }
    
};

class Child : public Mother {   // derived class
    
private:
    double m_d;
    
public:
    Child(const int & i_inn = 2, const double & d_in = 1.6)
//    : m_i(i_in), m_d(d_in)
    : Mother(i_inn), m_d(d_in)
    {
//        Mother::setValue(i_in);
//        m_d = d_in;
        std::cout << "child Constructor" << std::endl;
    }
    
    void setValue(const int & i_in, const double & d_in) {
//        m_i = i_in;
        Mother::setValue(i_in);
        m_d = d_in;
    }
    void setValue(const double & d_in) {
        m_d = d_in;
    }
    double getValue() {
        return m_d;
    }
    
};

class Daughter : public Mother {
    
};

class Son : public Mother {
    
};


int main() {
    
    using namespace std;
    
    Mother mother(1024);
//    mother.setValue(;
    cout << mother.getValue() << endl;
    
    Child child(1025,1026);
//    child.Mother::setValue(128);
//    child.setValue(127);
//    child.Mother::setValue(128);
//    child.setValue(1.5);
    cout << child.Mother::getValue() << endl;
    cout << child.getValue() << endl;
    
    child.setValue(1.2);
    cout << child.getValue() << endl;
    
    return 0;
}
