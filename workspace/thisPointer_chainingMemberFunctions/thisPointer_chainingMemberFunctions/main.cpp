#include <iostream>

class Calc {
    
private:
    int m_value;
    
public:
    Calc(int init_value) : m_value(init_value) {}
    
    Calc& add(int value) { m_value += value; return *this;}
    Calc& sub(int value) { m_value -= value; return *this;}
    Calc& mult(int value) { m_value *= value; return *this;}
    
    void print() {
        std::cout << m_value << std::endl;
    }
    
};

class Simple {
  
private:
    int m_id;
    
public:
    Simple (int id_in) {
        this->setID(id_in);
        std::cout << this << std::endl;
    }
    
    void setID(int id) { m_id = id; }
    int getID() { return m_id; }
    
};

int main() {
    
    using namespace std;
    
    Simple s1{1}, s2{2};
    cout << s1.getID() << endl;
    cout << s2.getID() << endl;
    
    s1.setID(2);
    s2.setID(4);
    cout << s1.getID() << endl;
    cout << s2.getID() << endl;
    
    // Simple::setID(&s2, 4); == s2.setID(4)
    
    Calc cal(10);
    Calc &temp1 = cal.add(10);
    Calc &temp2 = temp1.sub(1);
    Calc &temp3 = temp2.mult(2);
    temp3.print();
//    cal.add(10);
//    cal.print();
//    cal.sub(2);
//    cal.print();
//    cal.mult(3);
//    cal.print();
    cal.add(10).sub(2).mult(3).print();
    
    return 0;
}
