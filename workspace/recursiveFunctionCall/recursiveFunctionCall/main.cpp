#include <iostream>

void countDown(int count) {
    if (count > 0) {
        std::cout << count << std::endl;
        countDown(count - 1);
    }
    else {
        std::cout << "loop ends" << std::endl;
    }
}

int sumTo(int sumto) {
    if (sumto <= 0) {
        return 0;
    }
    else if (sumto <= 1) {
        return 1;
    }
    else{
        return sumTo(sumto - 1) + sumto;
    }
    
}

int main() {
    
    using namespace std;
    
    countDown(5);
    
    cout << sumTo(10) << endl;
    
    return 0;
}
