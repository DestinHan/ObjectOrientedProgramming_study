#include <iostream>
#include <vector>
#include <string>
#include "Lecture.h"

int main() {
    
    using namespace std;
    
    // Composition Relationship
    Lecture lec1("Introduction to Computer Programming");
    lec1.assignTeacher(Teacher("Prof. Hong"));
    lec1.registerStudent(Student("Jack Jack", 0));
    lec1.registerStudent(Student("Dash", 1));
    lec1.registerStudent(Student("Violet", 2));

    Lecture lec2("Computational Thinking");
    lec2.assignTeacher(Teacher("Prof. Good"));
    lec2.registerStudent(Student("Jack Jack", 0));
    
    // test
    {
        cout << lec1 << endl;
        cout << lec2 << endl;
    }
    
    lec2.study();
    
    cout << lec1 << endl;
    cout << lec2 << endl;
    
    return 0;
}

