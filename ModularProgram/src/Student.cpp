#include "Student.h"
#include "Person.h"

Student::Student(const std::string& name, int age, const std::string& studentId) : Person(name, age), studentId(studentId) {
    std::cout << "Student constructor called for " << this->name << std::endl;
}

Student::~Student() {
    std::cout << "Student destructor called for " << this->name << std::endl;
}

void Student::display() const {
    Person::display();
    std::cout << ", Student ID: " << this->studentId;
}