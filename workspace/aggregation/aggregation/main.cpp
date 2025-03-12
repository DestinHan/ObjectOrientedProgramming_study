#include <iostream>
#include <vector>
#include <string>
#include "Lecture.h"
#include "Student.h"
#include "Teacher.h"

int main() {
    
    using namespace std;
    
    Student std1("Jack Jack", 0);
    Student std2("Dash", 1);
    Student std3("Violet", 2);
    
    Teacher teacher1("Prof. Hong");
    Teacher teacher2("Prof. Good");
    
    // Composition Relationship
    Lecture lec1("Introduction to Computer Programming");
    lec1.assignTeacher(&teacher1);
    lec1.registerStudent(&std1);
    lec1.registerStudent(&std2);
    lec1.registerStudent(&std3);

    Lecture lec2("Computational Thinking");
    lec2.assignTeacher(&teacher2);
    lec2.registerStudent(&std1);
    
    // test
    {
        cout << lec1 << endl;
        cout << lec2 << endl;
    }
    
    
    lec1.study();
    cout << lec1 << endl;
    
    lec2.study();
    cout << lec2 << endl;
    
    
    return 0;
}

