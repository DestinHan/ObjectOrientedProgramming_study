#include <iostream>

class Intlist {
    
private:
    int m_list[10]; // array
    
public:
//    void setItem(int index, int value) {
//        m_list[index] = value;
//    }
//    
//    int getItem(int index) {
//        return m_list[index];
//    }
//    
//    int * getList() {
//        return m_list;
//    }
    
    int & operator [] (const int index) {
        return m_list[index];
    }
    
};

int main() {
    
    using namespace std;
    
//    Intlist my_list;
//    my_list.setItem(0, 1);
//    cout << my_list.getItem(0) << endl;
//    my_list.getList()[3] = 1;
//    cout << my_list.getItem(3) << endl;
    
    Intlist my_list;
    my_list[3] = 10;
    cout << my_list[3] << endl;
    
    return 0;
}
