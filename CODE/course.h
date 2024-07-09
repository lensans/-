#ifndef COURSE_H
#define COURSE_H

#include <string>

class Course {
private:
    int courseId;
    std::string courseName;

public:
    Course(int id, const std::string& name);
    QString getCourseId() const;
    std::string getCourseName() const;
};

#endif // COURSE_H
