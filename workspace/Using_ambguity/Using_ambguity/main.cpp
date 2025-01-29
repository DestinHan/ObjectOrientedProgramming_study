#include <iostream>

namespace a {
int my_var(10);
}
namespace b {
int my_var(20);
}

int main(void) {
    
    //using namespace std;
    using std::endl;
    
    std::cout << "Hello " << endl;
    
    std::cout << a::my_var << endl;
    std::cout << b::my_var << endl;
    
    {
        using namespace a;
        std::cout << my_var << endl;
    }
    
    {
        using namespace b;
        std::cout << my_var << endl;
    }
    
    return 0;
}
