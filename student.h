#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
private:
    std::string name;
    int id;
    double quizScore;

public:
    Student(std::string studentName, int studentId);

    void setQuizScore(double score);
    double getQuizScore();
    void displayInfo();
};

#endif
