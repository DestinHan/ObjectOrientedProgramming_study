#include <iostream>
#include <string>
#include <vector>

class Date {
    
private:        // access specifier, default is private
    int m_month;
    int m_day;
    int m_year;
    
public:
    void setDate(const int& month_input, const int& day_input, const int& year_input) {
        m_month = month_input;
        m_day = day_input;
        m_year = year_input;
    }
    
    void setMonth(const int& month_input) {     // setters
        m_month = month_input;
    }
    // setDay, setYear...
    
    const int& getDay() {       // getters
        return m_day;
    }
    
    void copyFrom(const Date& original) {
        m_month = original.m_month;
        m_day = original.m_day;
        m_year = original.m_year;
    }
    
};


int main() {
    
    using namespace std;
    
    Date today; // { 8, 4, 2025 };
//    today.m_month = 8;
//    today.m_day = 4;
//    today.m_year = 2025;
    today.setDate(8, 4, 2025);
    today.setMonth(8);
    
    cout << today.getDay() << endl;
    
    Date copy;      // today and copy is instance but in different memory
    copy.copyFrom(today);
    
    cout << copy.getDay() << endl;
    
    return 0;
}
