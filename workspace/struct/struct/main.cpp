#include <iostream>
#include <string>

struct Person {
    
    double  height;
    float   weight;
    int     age;
    std::string  name;
    std::string nickName = "Mr. Incredible"; // default
    
    void print() {
        
        std::cout << height << " " << weight << " " << age << " " << name << std::endl;
        
    }
    
};

//void printPerson(Person ps) {
//    
//    std::cout << ps.height << " " << ps.weight << " " << ps.age << " " << ps.name << std::endl;
//    
//}

struct Family {
    
    Person me, mom, dad;
    
};

Person getMe() {
    
    Person me { 2.0, 100.0, 20, "Seung Hoon Han" };
    return me;
    
}

struct Employee {   // 2 + 4 + 8 = 14
    
    short id;       // 2byte
    int age;        // 4byte
    double wage;    // 8 byte
    
};

int main(void) {
    
    using namespace std;
    
//    Person me;
//    me.age = 20;
//    me.name = "Seung Hoon Han"
//    me. weight = 100.0;
    Person me{ 2.0, 100.0, 20, "Seung Hoon Han" };  // initiallize
//    printPerson(me);
    Person me2(me);
//    me2 = me;
    me2.print();
    
    me.weight = 70;
//    printPerson(me);
    me.print();
    
    Person mom;
    Person dad;
    
    Employee emp1;
    
    cout << sizeof(emp1) << endl;   // 16 (not 14, 2 + (2) + 4 + 8 = 16 "padding")
    
    return 0;
}
