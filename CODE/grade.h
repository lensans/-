#ifndef GRADE_H
#define GRADE_H

#include <QString>

class Grade {
private:
    QString courseId;
    QString studentId;
    float score;

public:
    Grade(int courseId, int studentId, float score);
    QString getCourseId() const;
    QString getStudentId() const;
    float getScore() const;
};

#endif // GRADE_H

