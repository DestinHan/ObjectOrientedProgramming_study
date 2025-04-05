#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <map>

int main() {
    
    using namespace std;
    
    std::vector<int> container;
    
    for (int i=0; i<10; ++i) {
        container.push_back(i);
    }
    
    std::vector<int>::const_iterator itr;
    itr = container.begin();
    while (itr != container.end()) {
        std::cout << *itr << " ";
        
        ++itr;
    }
    std::cout << std::endl;
    
    for (auto & e : container) {
        std::cout << e << " ";
    }
    std::cout << std::endl;
    
    for (auto itr = container.begin(); itr != container.end(); ++itr) {
        std::cout << *itr << " ";
    }
    
    list <int> container1;
    for (int i=0; i<10; ++i) {
        container1.push_back(i);
    }
    for (auto itr = container1.begin(); itr != container1.end(); ++itr) {
        std::cout << *itr << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
