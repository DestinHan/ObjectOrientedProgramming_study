#include <iostream>
#include <string>

class Animal {
    
protected:
    std::string m_name;
    
public:
    Animal(std::string name) : m_name(name) {}
    
public:
    std::string getName() { return m_name; };
    
    virtual void speak() const = 0;     // pure virtual function
    // must nee virtual speak() in derived class
    
};

//void Animal::speak() const {    // body of the pure virtual function
//    std::cout << m_name << " ? ? ? " << std::endl;
//}

class Cat : public Animal {
    
public:
    Cat(std::string name) : Animal(name) {}
    
    virtual void speak() const override {
        std::cout << m_name << " Meow " << std::endl;
    }
    
};

class Dog : public Animal {
    
public:
    Dog(std::string name) : Animal(name) {}
    
    virtual void speak() const override {
        std::cout << m_name << " Woof " << std::endl;
    }
    
};

class Cow : public Animal {
    
public:
    Cow(std::string name) : Animal(name) {}
    
    virtual void speak() const override {
        std::cout << m_name << " MOO " << std::endl;
    }
    
};

int main() {
    
    using namespace std;
    
//    Animal ani("Hi");     can't,
    
    Cow cow("lazy");
    cow.speak();
    
    return 0;
}
