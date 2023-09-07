#include "Student.h"
#include <iostream>

// Constructor implementation
Student::Student(std::string studentName, int studentId)
    : name(studentName), id(studentId), quizScore(0) {}

// Member function definitions
void Student::setQuizScore(double score) {
    quizScore = score;
}

double Student::getQuizScore() {
    return quizScore;
}

void Student::displayInfo() {
    std::cout << "Student Name: " << name << std::endl;
    std::cout << "Student ID: " << id << std::endl;
    std::cout << "Quiz Score: " << quizScore << std::endl;
}
