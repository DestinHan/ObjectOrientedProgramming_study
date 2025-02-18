#include <iostream>

enum FruitType {
    
    APPLE,
    BANANA,
    CHERRY,
};

class Fruit {
    
public:
    enum FruitType {
        
        APPLE,
        BANANA,
        CHERRY,
    };
    
private:
    FruitType m_type;
    
public:
    Fruit(FruitType type) : m_type(type) {}
    
    FruitType getType() {
        return m_type;
    }
    
};

int main() {
    
    using namespace std;
    
    Fruit apple(Fruit::APPLE);
    
    if (apple.getType() == Fruit::APPLE) {
        std::cout << "Apple" << std::endl;
    }
    

    
    return 0;
}
