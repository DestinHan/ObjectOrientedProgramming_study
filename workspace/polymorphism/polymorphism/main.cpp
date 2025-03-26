// Basic Polymorphism

#include <iostream>
#include <string>

class Animal {
protected:
    std::string m_name;
    
public:
    Animal(std::string name) : m_name(name) {}
    
    std::string getName() { return m_name; }
    
    virtual void speak() const {    // virtual made speak() goes down to child class(polymorphism_
        std::cout << m_name << " ? ? ? " << std::endl;
    }
    
};

class Cat : public Animal {
public:
    Cat(std::string name) : Animal(name) {}
    
    void speak() const {
        std::cout << m_name << " Meow " << std::endl;
    }
    
};

class Dog : public Animal {
public:
    Dog(std::string name) : Animal(name) {}
    
    void speak() const {
        std::cout << m_name << " Woof " << std::endl;
    }
    
};

int main() {
    
    using namespace std;
    
    Animal animal("My Animal");
    Cat cat("My cat");
    Dog dog("My dog");
    
    animal.speak();
    cat.speak();
    dog.speak();
    
    Animal *ptr_animal1 = &cat;
    Animal *ptr_animal2 = &dog;
    
    ptr_animal1->speak();
    ptr_animal2->speak();
    
    Cat cats[] = {Cat("cat1"), Cat("cat2"), Cat("cat3"), Cat("cat4"), Cat("cat5")};
    Dog dogs[] = {Dog("dog1"), Dog("dog2")};
    
    for (int i=0; i<5; ++i) {
        cats[i].speak();
    }
    
    for (int i=0; i<2; ++i) {
        dogs[i].speak();
    }
    
    Animal *my_animals[] = {&cats[0], &cats[1], &cats[2], &cats[3], &cats[4], &dogs[0], &dogs[1]};
    for (int i=0; i<7; ++i) {
        my_animals[i] -> speak();
    }
    
    return 0;
}
