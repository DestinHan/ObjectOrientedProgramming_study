#ifndef position_h
#define position_h

#include <iostream>

class Position2D {
    
private:
    int m_x;
    int m_y;
    
public:
    Position2D() {}     // basic constructor
    Position2D(const int & x_in, const int & y_in) : m_x(x_in), m_y(y_in) {}
    
    void set(const Position2D & pos_target) {       // setter
        set(pos_target.m_x, pos_target.m_y);
        // m_x = pos_target.m_x;
        // m_y = pos_target.m_y;
    }
    void set(const int & x_target, const int & y_target) {      // setter
        m_x = x_target;
        m_y = y_target;
    }
    
    friend std::ostream & operator << (std::ostream & out, const Position2D& position) {
        out << position.m_x << " " << position.m_y << std::endl;
        return out;
    }
    
};

#endif
