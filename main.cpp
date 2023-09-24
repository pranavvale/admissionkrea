#include "Student.h"
#include <iostream>
#include <string>

int main() {
    std::string studentName;
    int studentId;

    std::cout << "Enter student name: ";
    std::getline(std::cin, studentName);

    std::cout << "Enter student ID: ";
    std::cin >> studentId;

    // Dynamic memory allocation for the Student object
    Student* student = new Student(studentName, studentId);

    double quizScore;

    std::cout << "Enter quiz score: ";
    std::cin >> quizScore;

    // Set the quiz score using a member function
    student->setQuizScore(quizScore);

    std::cout << "\nStudent Grade Report:\n";

    // Display student information
    student->displayInfo();

    // Don't forget to free the allocated memory
    delete student;

    return 0;
}
