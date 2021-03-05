/***************************************************************
 * Description: This is to understand the "Objects to function" in c++.
 *      Object-oriented Programmin[OOPs]: rather than creating separate variables and functions,
 *                      we can also wrap these related data and functions in a single place (by creating objects).
 *                      This programming paradigm is known as object-oriented programming.
 *            In C++ programming, we can pass objects to a function in a similar manner as passing regular arguments.
 *          1) C++ Pass Objects to Function
 *          2) C++ Return Object from a Function
 *
 *
 * Author :Nikhil Gowda Shivaswamy,
 * 					-Master of Engineering in Information Technology
 *
 *********************************************************/
#include <iostream>
using namespace std;

class Student {

   public:
    double marks;

    // constructor to initialize marks
    Student(double m) {
        marks = m;
    }
};

class StudentReturn {
   public:
    double marks1, marks2;
};


// function that has objects as parameters
void calculateAverage(Student s1, Student s2) {

    // calculate the average of marks of s1 and s2
    cout<<"Function which pass objects to function"<<endl;
    double average = (s1.marks + s2.marks) / 2;

   cout << "Average Marks = " << average << endl;

}


// function that returns object of Student
StudentReturn createStudent() {
    StudentReturn student;

    // Initialize member variables of Student
    student.marks1 = 96.5;
    student.marks2 = 75.0;
    cout<<"Return Object from a Function"<<endl;

    // print member variables of Student
    cout << "Marks 1 = " << student.marks1 << endl;
    cout << "Marks 2 = " << student.marks2 << endl;

    return student;
}

int main() {
    Student student1(88.0), student2(56.0);

  // pass the objects as arguments
   calculateAverage(student1, student2);

   StudentReturn studentReturn1;

    // Call function
    studentReturn1 = createStudent();

    return 0;
}
