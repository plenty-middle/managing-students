// Student.cpp
#include "Student.h"
#include "Course.h"

Student::Student(int studentId, const std::string& name)
    : studentId(studentId), name(name) {}

void Student::enrollCourse(Course* course) {
    enrolledCourses.push_back(course);
}

void Student::displayInfo() const {
    std::cout << "Student ID: " << studentId << "\n";
    std::cout << "Name: " << name << "\n";
    std::cout << "Enrolled Courses:\n";
    for (const auto& course : enrolledCourses) {
        std::cout << "- " << course->getTitle() << "\n";
    }
    std::cout << "\n";
}
