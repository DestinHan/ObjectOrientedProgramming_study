#include <iostream>
#include <string>
#include <vector>

// Object : name, address, age, height, weight, print()

class Friend {
    
public:     // access specifier(public, private, protected)
    std::string  m_name;
    std::string  m_address;
    int     m_age;
    double  m_height;
    double  m_weight;
  
    void print(){
        std::cout << m_name << " " << m_address << " " << m_age << " " << m_height << " " << m_weight << std::endl;
    }
    
};

void print(const std::string &name, const std::string &address, const int &age, const double &height, const double &weight){
    
    std::cout << name << " " << address << " " << age << " " << height << " " << weight << std::endl;
    
}

int main() {
    
    using namespace std;
    
    Friend jj { "JACK JACK", "Uptown", 2, 30, 10 };     // instance, instanciation
//
//    print(jj.name, jj.address, jj.age, jj.height, jj.weight);
//    print(jj);
    jj.print();
    cout << &jj << endl;
    
//    vector<string> name_vec;
//    vector<string> address_vec;
//    vector<int> age_vec;
//    vector<double> height_vec;
//    vector<double> weight_vec;
    
    vector<Friend> my_friends;
    my_friends.resize(2);
    
    my_friends[0].print();
    my_friends[1].print();
    
    for(auto &ele : my_friends) {
        ele.print();
    }
    
    
}
