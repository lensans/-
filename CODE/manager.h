#ifndef MANAGER_H
#define MANAGER_H

#include <vector>
#include "student.h"
#include "course.h"
#include "grade.h"

class Manager {
private:
    std::vector<Student> students;
    std::vector<Course> courses;

public:
    void addStudent(const Student& student);
    void addCourse(const Course& course);
    void addGrade(int studentId, const Grade& grade);
    Student* findStudent(int studentId);
    Course* findCourse(int courseId);
    std::vector<Student> getAllStudents() const;
    std::vector<Course> getAllCourses() const;
};

#endif // MANAGER_H
