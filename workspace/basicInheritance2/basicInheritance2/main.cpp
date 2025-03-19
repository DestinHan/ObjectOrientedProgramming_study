#include "Student.h"
#include "Teacher.h"

int main() {
    
    Student std("Jack Jack");
    std.setName("Jack Jack2");
    std::cout << std.getName() << " ";
    
    Teacher teacher1("Dr. H");
    teacher1.setName("Dr. C");
    std::cout <<teacher1.getName() << std::endl;
    
    std::cout << std << std::endl;
    std::cout << teacher1 << std::endl;
    
    std.doNothing();
    teacher1.doNothing();
    
    return 0;
}
