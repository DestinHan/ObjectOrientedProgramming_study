#include <Iostream>

class PoweredDevice {
public:
    int m_i;
    
    PoweredDevice(int power) {
        std::cout << "PoweredDevice: " << power << '\n';
    }
    
};

class Scanner : public PoweredDevice {
public:
    Scanner(int scanner, int power) : PoweredDevice(power) {
        std::cout << "Scanner : " << scanner << '\n';
    }
    
};

class Printer : public PoweredDevice {
public:
    Printer(int printer, int power) : PoweredDevice(power) {
        std::cout << "Printer : "<< printer << '\n';
    }
    
};

class Copier : public Scanner, public Printer {
public:
    Copier(int scanner, int printer, int power) : Scanner(scanner, power), Printer(printer, power) {}
    
};

int main() {
    
    using namespace std;
    
    Copier cop(1, 2, 3);
//    cout << &cop.Scanner::PoweredDevice::m_i << endl; // Ambiguity
    
    return 0;
}
