#include <iostream>
#include <string>

class Student {
    
private:
    int     m_id;
    std::string  m_name;
    
public:
    
    Student(const std::string& name_in) : Student(0, name_in) {}    // delegating Constructor
    Student(const int& id_in, const std::string name_in) : m_id(id_in), m_name(name_in) {}
    
    void print() {
        std::cout << m_id << " " << m_name << std::endl;
    }
    
};

int main() {
    
    using namespace std;
    
    Student st1{1, "Jack Jack"};
    st1.print();
    
    Student st2{"Dash"};
    st2.print();
    
    return 0;
}
