// StudentCourseSystem.cpp
#include "Student.h"
#include "Course.h"

int main() {
    Student student1(1, "John Doe");
    Student student2(2, "Jane Smith");

    Course course1(101, "Introduction to C++");
    Course course2(102, "Advanced C++ Programming");

    course1.addStudent(&student1);
    course1.addStudent(&student2);
    course2.addStudent(&student2);

    student1.enrollCourse(&course1);
    student2.enrollCourse(&course1);
    student2.enrollCourse(&course2);

    std::cout << "Course Information:\n";
    course1.displayInfo();
    course2.displayInfo();

    std::cout << "Student Information:\n";
    student1.displayInfo();
    student2.displayInfo();

    return 0;
}
