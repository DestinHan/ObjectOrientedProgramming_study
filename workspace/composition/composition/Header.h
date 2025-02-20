#ifndef Header_h
#define Header_h

#include <string>
#include "position.h"

class Monster {
    
private:
    std::string m_name;
    Position2D m_location;
//    int m_x;    // location
//    int m_y;

public:
    Monster(const std::string name, const Position2D & pos_in) : m_name(name), m_location(pos_in) {}

    void moveTo(const Position2D & pos_target) {
        m_location.set(pos_target);
//        m_x = x_target;
//        m_y = y_target;
    }
    
    friend std::ostream & operator << (std::ostream & out, const Monster& monster) {
        out << monster.m_name << " " << monster.m_location << std::endl;
        return out;
    }
    
    };

#endif
