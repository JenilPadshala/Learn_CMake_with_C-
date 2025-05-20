#include <iostream>
#include "Person.h"
#include "Student.h"

int main() {
    std::cout << "--- Creating Person object ---" << std::endl;
    Person person("John", 30);
    person.display();
    std::cout << std::endl << std::endl;

    std::cout << "--- Creating Student object ---" << std::endl;
    Student student("Jane", 20, "12345");
    student.display();
    std::cout << std::endl << std::endl;

    std::cout << "--- Polymorphism example ---" << std::endl;
    Person* p_student = new Student("Charlie Chaplin", 22, "S67890");
    p_student->display();
    std::cout << std::endl;
    delete p_student;
    p_student = nullptr;
    std::cout << std::endl;

    std::cout << "--- End of program ---" << std::endl;
    return 0;
}