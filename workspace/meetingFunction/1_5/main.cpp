#include <iostream>
#include <cstdio>

using namespace std;

//int addTwoNumbers (int num_a, int num_b) {
//
//    int sum = num_a + num_b;
//    
//    return sum;
//}

void print(void) {
    
    cout << "Hello" << endl;
    
}

void printHelloWorld(void) {
    
    cout << "Hello World" << endl;
    print(); // 함수에서 함수 호출
    
    return; // return을 만나면 무조건 반환을 함 그 밑에 코드는 실행 X
}

int addTwoNumbers (int a, int b) {
    
    return a + b;
    
}

int main(void) {
    
    cout << 1 + 2 << endl;
    cout << 3 + 4 << endl;
    cout << 8 + 13 << endl;
    
    cout << addTwoNumbers(1, 2) << endl;    // 1, 2같은 함수에 들어간 값을 argument라 함.
    cout << addTwoNumbers(3, 4) << endl;    // 결국 함수가 값으로 된다 여기서는 7
    cout << addTwoNumbers(8, 13) << endl;
    
    cout << "Hello World" << endl;
    printHelloWorld();
    
    return 0;
}
