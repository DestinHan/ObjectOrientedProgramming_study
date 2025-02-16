#include <iostream>
#include <vector>

void printStack(const std::vector<int> &stack) {
    
    for (auto &e : stack) {
        std::cout << e << " ";
    }
    std::cout << std::endl;
    
}

int main() {
    
    using namespace std;
    
//    int *v = new int[3] { 1, 2, 3 }
    std::vector<int> v{ 1, 2, 3 };
    
    // size and capacity
    for(auto &element : v) {
        cout << element << " ";
    }
    cout << endl;
    
    cout << v.size() << endl;
    
    v.resize(10);
    cout << v.size() << endl;
    
    v.resize(2);
    for(auto &element : v) {
        cout << element << " ";
    }
    cout << endl;
    
    cout << v.size() << endl;
    
    // stack..
    cout << "stack..." << endl;
    
    std::vector<int> stack ;
    
    stack.push_back(3);     // 3
    printStack(stack);
    
    stack.push_back(5);     // 3 5
    printStack(stack);
    
    stack.push_back(7);     // 3 5 7
    printStack(stack);
    
    stack.pop_back();       // 3 5
    printStack(stack);
    
    stack.pop_back();       // 3
    printStack(stack);
    
    stack.pop_back();       //
    printStack(stack);

    return 0;
    
}
