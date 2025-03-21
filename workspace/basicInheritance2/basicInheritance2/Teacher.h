#ifndef Teacher_h
#define Teacher_h

#include "Person.h"

class Teacher : public Person {
private:
    
    // TODO: more members like home address, salary, age, evaluation...
    
public:
    Teacher(const std::string & name_in = "No name")
    : Person(name_in)
    {}
    
    void teach() {
        std::cout << getName() << " is teaching" << std::endl;
    }
    
    friend std::ostream & operator << (const std::ostream & out, const Teacher & teacher) {
        out << teacher.getName();
        return out;
    }
    
};

#endif 
