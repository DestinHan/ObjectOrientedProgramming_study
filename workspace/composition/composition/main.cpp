#include "Header.h"

int main() {
    
    using namespace std;
    
    Monster mon1("Sanson", Position2D(0, 0));
    cout << mon1 << endl;
    
    while(1){   // game loop
        mon1.moveTo(Position2D(1,1));
        cout << mon1 << endl;
        break;
    }
    
    return 0;
}
