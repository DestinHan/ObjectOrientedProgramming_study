#include <iostream>

struct Rectangle {
    
    int length;
    int width;
    
};

enum StudentName {
    
    JACKJACK,       // 0
    DASH,           // 1
    VIOLET,         // 2
    NUM_STUDENTS,   // 3
    
};

void doSomething(int student_scores[20]) {   // this is not actually array, pointer variabel.. it takes first addresss of array that it takes
    
    std::cout << student_scores << std::endl;   // address
    std::cout << student_scores[1] << std::endl;
    std::cout << student_scores[2] << std::endl;
    
}

int main() {
    
    using namespace std;
    
//    int jackjack_score;
//    int dash_score;
//    int violet_score;
    
    int one_student_score;  // 1 variable
    int student_scores[5];  // 5 int
    
//    cout << sizeof(one_student_score) << endl;
//    cout << sizeof(student_scores) << endl;
    
    one_student_score = 100;
    
    student_scores[0] = 100;    // 1st element
    student_scores[1] = 80;     // 2nd element
    student_scores[2] = 90;     // 3rd element
    student_scores[3] = 50;     // 4th element
    student_scores[4] = 0;      // 5th element
    
//    student_scores[5] = 30;     // 6th element
    
    for(int i=0; i<5; i++) {
        cout << student_scores[i] << endl;
    }
    
    double average = 0.0;
    int container = 0;
    
    for(int i=0; i<5; i++) {
        
        container += student_scores[i];
        
    }
    cout << container << endl;  //320
    average = container / 5.0;
    cout << average << endl;
    
    cout << sizeof(Rectangle) << endl;  // 8
    
    Rectangle rect_arr[10];
    cout<< sizeof(rect_arr) << endl;    // 80
    
    rect_arr[0].length = 1;
    
    int myarray[5] = {1, 2, 3, 4, 5};
    int myarray1[5] = {1, 2, }; // 1, 2, 0, 0, 0
    int myarray2[] = {1, 2, 3, 4, 5};   // 1, 2, 3, 4, 5
    
    cout << myarray[JACKJACK] << endl;      // 1
    
    const int num_students = 20;
    int students_scores[num_students];      // "students_scores" uses as address.
    
    for (int i=0; i<20; i++) {
        cout << &students_scores[i] << endl;
    }
    
    doSomething(student_scores);
    
    return 0;
}
