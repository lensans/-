#ifndef STUDENT_H
#define STUDENT_H

#include <QString>
#include <vector>
#include "grade.h"

class Student {
private:
    int studentId;
    QString name;
    std::vector<std::pair<Grade,int>> grades;

public:
    Student(int id, const std::string& name);
    int getStudentId() const;
    QString getName() const;
    void addGrade(const Grade& grade);
    std::vector<Grade> getGrades() const;
};

#endif // STUDENT_H

