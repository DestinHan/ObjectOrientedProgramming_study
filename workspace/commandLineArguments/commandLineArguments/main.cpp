#include <iostream>

int main(int argc, const char * argv[]) {
    
    using namespace std;
    
    for(int count = 0; count < argc; ++count) {
        cout << argv[count] << endl;
    }
    
    return 0;
}
