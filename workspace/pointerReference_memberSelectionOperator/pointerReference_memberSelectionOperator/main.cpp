#include <iostream>

struct Person {
    
    int age;
    double weight;
    
};

int main(){
    
    using namespace std;
    
    Person Destin;
    
    Destin.age = 5;
    Destin.weight = 30;
    cout << Destin.age << " " << Destin.weight << endl;
    
    Person &ref = Destin;
    ref.age = 26;
    ref.weight = 70;
    cout << Destin.age << " " << Destin.weight << endl;
    cout << ref.age << " " << ref.weight << endl;
    
    Person *ptr = &Destin;
    ptr->age = 30;
    ptr->weight = 80;
    (*ptr).age = 35;
    cout << (*ptr).age << " " << (*ptr).weight << endl;
    cout << ref.age << " " << ref.weight << endl;
    
    return 0;
}
