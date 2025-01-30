#include <iostream>
#include <vector>
#include <cstdint>

int main(void) {
    
    using namespace std;
    
    typedef double distance_t;  // _t -> typedef
    
    double     my_distance;
    distance_t home2work;       // double
    distance_t home2school;     // double
    
//    typedef std::vector<std::pair<std::string, int> > pairlist_t;   // don't have to use std:: because using namespace std;
    using pairlist_t = std::vector<std::pair<std::string, int> >;
    
    
    pairlist_t pairlist1;
    
    
    
    return 0;
}
