#include <iostream>

int getInt() {
   
    while (true){
        int x;
        std::cout << "Enter an integer number : ";
        std::cin >> x;
        
        if(std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Invalid number, please try again";
        }
        else {
            std::cin.ignore(32767, '\n');
            return x;
        }
    }
}

char getOperator() {
    
    while(true) {
        char op;
        std::cout << "Enter an operator (+, -) : ";
        std::cin >> op;
        std::cin.ignore(32767, '\n');
        
        if(op == '+' || op == '-')
            return op;
        else
            std::cout << "Invalid operator, please try again" << std::endl;
    }
}

void printResult(int x, char op, int y) {
    
    if (op == '+') std::cout << "The result is : " << x + y << std::endl;
    else if (op == '-') std::cout << "The result is : " << x - y << std::endl;
    else std::cout << "Invalid operator" << std::endl;
    
}

int main() {
    
    int x = getInt();
    char op = getOperator();
    int y = getInt();
    
    printResult(x, op, y);
    
    return 0;
}
