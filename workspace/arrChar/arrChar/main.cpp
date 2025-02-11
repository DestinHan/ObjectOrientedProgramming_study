#include <iostream>
#include <cstring>

int main() {
    
    using namespace std;
    
    char myString[] = "string";
    
    cout << sizeof(myString) / sizeof(myString[0]) << endl;     // 7
    
    char myString1[224];
    
//    cin >> myString1;
//    
//    myString[0] = 'A';
//    
//    // cout << myString1 << endl;
    
    cin.getline(myString1, 225);
    cout << myString1 << endl;
    
    int ix = 0;
    while(true) {
        
        if(myString1[ix] == '\0') break;
        
        cout << myString1[ix] << " " << (int)myString[ix] << endl;
        ++ix;
        
    }
    
    char source[] = "Copy this!";
    char dest[50];
    strcpy(dest, source);
    
    cout << source << endl;
    cout << dest << endl;   // Copy this!
    
    strcat(dest, source);
    cout << source << endl;
    cout << dest << endl;   // Copy this!Copy this!
    
    cout << strcmp(source, dest) << endl;   // if same : 0, diff : not 0
    
    if (strcmp(source, dest) == 0) {
        cout << "Same string" << endl;
    }
    else {
        cout << "different string" << endl;
    }
    
    return 0;
}
