#include <iostream>

class Accumulator {
    
private:
    int m_counter = 0;
    
public:
    int operator()(int i) {return (m_counter += i);}
        
};

int main() {
    
    using namespace std;
    
    Accumulator acc;
    cout << acc(10) << endl;    // looks like functor
    cout << acc(20) << endl;
    
    return 0;
}
