#include <iostream>

enum class Colors {
    
    BLACK,  // 0
    WHITE,  // 1
    RED,    // 2
    GREEN,  // 3
    BLUE,   // 4
};

void printColorName(Colors color){
//    if (color == Colors::BLACK)
//        std::cout << "Black" << std::endl;
//    else if (color == Colors::WHITE)
//        std::cout << "White " << std::endl;
//    else if (color == Colors::RED)
//        std::cout << "Red" << std::endl;
    {
        switch(static_cast<int>(color)) {
            case 0 :
                std::cout << "Black";
        }
        std::cout << std::endl;
    }
}

int main(void) {
    
    using namespace std;
    
    printColorName(Colors::BLACK);
    
    int x;
    cin >> x;
    {
        switch(x) {
            case 0:
                cout << "Zero";
                break;
            case 1:
                cout << "One";
                break;
            case 2:
                cout << "Two";
                break;
        }
        cout << endl;
    }
    
    int a;
    cin >> a;
    
    switch (a) {
            int b;  // can't give value in here
        case 0:
            b = 1;  // can give value in here
            cout << b << endl;
            break;
        case 1:
            cout << "ONEONE" << endl;
            
        default :
            cout << "You are wrong" << endl;
    }
    
    return 0;
}
