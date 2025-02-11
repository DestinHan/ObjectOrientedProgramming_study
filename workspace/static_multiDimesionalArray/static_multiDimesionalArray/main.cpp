#include <iostream>

int main() {
    
    using namespace std;
    
    const int num_rows = 3;
    const int num_columns = 5;
    
    for (int row=0; row<num_rows; ++row) {
        
        for (int column=0; column<num_columns; ++column) {
            cout << '[' << row << ']' << '[' << column <<']' << '\t';
        }
        cout << endl;
    }
    cout << endl;
    
    int array[num_rows][num_columns]    // row-major <-> column-major
    = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}
    };
    
    for (int row=0; row<num_rows; ++row) {
        
        for (int column=0; column<num_columns; ++column) {
            cout << array[row][column] << '\t';
        }
        cout << endl;
    }
    cout << endl;
    
    
    return 0;
}
