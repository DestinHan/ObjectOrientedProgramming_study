#include <iostream>

class Mother {
protected:
    int m_i;
    
    Mother(const int & i_in = 0) : m_i(1) {
        std::cout << "Mother construction" << std::endl;
    }
    
};

class Child : public Mother {
public: double m_d;
    
public:
    Child () : Mother(1), m_d(1.0) {
        std::cout << "Child construction" << std::endl;
    }
    
};

int main() {
    
    using namespace std;
    
    Child c1;   // Mother -> Child
    
    
    return 0;
    
}
