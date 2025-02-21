#include <iostream>
#include <fstream>

class Point {
    
private:
    double m_x, m_y, m_z;
    
public:
    Point (double x = 0.0, double y = 0.0, double z = 0.0) :
    m_x(x), m_y(y), m_z(z) {}
    
    double getX() { return m_x; }
    double getY() { return m_y; }
    double getZ() { return m_z; }
    
//    void print() {
//        std::cout << m_x << " " << m_y << " " << m_z << std::endl;
//    }
    
    friend std::ostream& operator << (std::ostream & out, const Point & point) {
        out << "(" <<  point.m_x << " " << point.m_y << " " << point.m_z << ")";
        return out;
    }
 
    friend std::istream& operator >> (std::istream & in, Point & point) {
//        out << "(" <<  point.m_x << " " << point.m_y << " " << point.m_z << ")";
        in >> point.m_x >> point.m_y >> point.m_z;
        return in;
    }
    
};

int main() {
    
    using namespace std;
    
    ofstream of("out.txt");
    
//    Point p1(0.0, 0.1, 0.2), p2(1.2, 1.3, 1.4);
    
//    p1.print();
//    p2.print();
    Point p1, p2;
    
    cin >> p1 >> p2;
    
    cout << p1 << " " << p2 << endl;
    
//    of << p1 << " " << p2 << endl;
//    of.close();
    
    return 0;
}
