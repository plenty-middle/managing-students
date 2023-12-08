// Student.h
#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include <vector>
#include "Course.h"

class Course; // Forward declaration to avoid circular dependency

class Student {
public:
    Student(int studentId, const std::string& name);

    void enrollCourse(Course* course);
    void displayInfo() const;

private:
    int studentId;
    std::string name;
    std::vector<Course*> enrolledCourses;
};

#endif // STUDENT_H
