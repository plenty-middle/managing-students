// Course.h
#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>
#include <vector>
#include "Student.h"

class Student; // Forward declaration to avoid circular dependency

class Course {
public:
    Course(int courseId, const std::string& title);

    void addStudent(Student* student);
    void displayInfo() const;

    const std::string& getTitle() const;

private:
    int courseId;
    std::string title;
    std::vector<Student*> enrolledStudents;
};

#endif // COURSE_H
