#include <iostream>

class Simple {
    
private:
    int m_id;
    
public:
    Simple(const int& id_in) : m_id(id_in) {std::cout << "Constructor " << m_id << std::endl;}
    
    ~Simple() {std::cout << "Destructor " << m_id << std::endl;}
    
};

class IntArray {
  
private:
    int *m_arr = nullptr;       // vector
    int m_length = 0;
    
public:
    IntArray(const int length_in) {
        m_length = length_in;
        m_arr = new int[m_length];
        
        std::cout << "Constructor " << std::endl;
    }
    
    int getLength() {
        return m_length;
    }
    
    ~IntArray() {
        if (m_arr != nullptr) {
            delete[] m_arr;
        }
    }
    
};

int main() {
    
    using namespace std;
    
//    Simple s1{0};
    Simple *s1 = new Simple{0};
    Simple s2{1};
    
    delete s1;
    
        IntArray my_int_arr(25);
    cout << my_int_arr.getLength() << endl;
    
    
    return 0;
}
