// Course.cpp
#include "Course.h"
#include "Student.h"

Course::Course(int courseId, const std::string& title)
    : courseId(courseId), title(title) {}

void Course::addStudent(Student* student) {
    enrolledStudents.push_back(student);
}

void Course::displayInfo() const {
    std::cout << "Course ID: " << courseId << "\n";
    std::cout << "Title: " << title << "\n";
    std::cout << "Enrolled Students:\n";
    for (const auto& student : enrolledStudents) {
        student->displayInfo();
        std::cout << "\n";
    }
}

const std::string& Course::getTitle() const {
    return title;
}
