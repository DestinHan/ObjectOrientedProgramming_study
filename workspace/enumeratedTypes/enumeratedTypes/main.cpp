#include <iostream>
#include <typeinfo>

enum Color {    // user defined data types
    
    COLOR_BLACK,
    COLOR_RED,
    COLOR_BLUE,
    COLOR_GREEN,
    COLOR_SKYBLUE,
    
};

enum Feeling {
    
    HAPPY,
    JOY,
    TIRED,
    BLUE,
    
};

int main(void) {
    
    using namespace std;
    
    Color paint = COLOR_BLACK;
    Color house(COLOR_BLUE);
    Color apple{ COLOR_RED };
    
    Color my_color = COLOR_BLACK;
    
    cout << my_color << " " << COLOR_BLACK << endl;
    cout << my_color << " " << COLOR_RED << endl;
    
    return 0;
}
