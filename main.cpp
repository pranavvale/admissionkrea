#include "Student.h"
#include <iostream>
#include <string>

int main() {
    std::string studentName;
    int studentId;

    std::cout << "Enter student name: ";
    std::cin.ignore(); 
    std::getline(std::cin, studentName);

    std::cout << "Enter student ID: ";
    std::cin >> studentId;

    Student* student = new Student(studentName, studentId);

    double quizScore;

    std::cout << "Enter quiz score: ";
    std::cin >> quizScore;

    
    student->setQuizScore(quizScore);

    std::cout << "\nStudent Grade Report:\n";

   
    student->displayInfo();

    delete student;

    return 0;
}
