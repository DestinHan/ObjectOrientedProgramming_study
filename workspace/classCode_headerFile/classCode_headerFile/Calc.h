#ifndef Calc_h
#define Calc_h

#include <iostream>

class Calc {
    
private:
    int m_value;
    
public:
    Calc(int init_value);
    
    Calc& add(int value);
    Calc& sub(int value);
    Calc& mult(int value);
    
    void print();
    
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

#endif
