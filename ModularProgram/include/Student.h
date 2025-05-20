#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>

class Student : public Person {
private:
    std::string studentId;
public:
    Student(const std::string& name, int age, const std::string& studentId);
    ~Student() override;

    void display() const override;

};

#endif