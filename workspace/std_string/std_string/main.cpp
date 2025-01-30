#include <iostream>
#include <string>
#include <limits>
int main(void) {
    
    using namespace std;
    
    cout << "Hello, World" << endl; // 12 characters but 13 it is
    
    const string my_hello = "Hello, World";
    cout << my_hello << endl;
    
    const char my_strs [] = "Hello, World";
    cout << my_strs << endl;
    
//    string my_ID = 123;   " " needs
    
    cout << "Your name ? : ";
    string name;
//    cin >> name;  take blank space as Enter
    std::getline(std::cin, name);
    
    cout << "Your age ? : ";
    string age;
//    cin >> age;   take blank space as Enter
    std::getline(std::cin, age);
    
    cout << "Name : " << name << ", " << "Age : " << age << endl;
    
    cout << "Your age ? : ";
    int age1;
    cin >> age1;
//    std::cin.ignore(32767, '\n');   //ignore equal or lesser than 32767 char(magic number)
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    
    cout << "Your name ? : ";
    string name1;
//    cin >> name;  take blank space as Enter
    std::getline(std::cin, name1);
    
    string a("Hello, ");
    string b("World");
    string hw = a + b;  // append
    
    hw += " I'm good";
    
    cout << a + b << endl;
    cout << hw << endl; // Hello, World I'm good
    
    cout << a.length() << endl; // 7
    
    return 0;
}
