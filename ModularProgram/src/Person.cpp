#include "Person.h"

Person::Person(const std::string& name, int age) : name(name), age(age) {
    std::cout << "Person constructor called for " << this->name << std::endl;
}

Person::~Person() {
    std::cout << "Person destructor called for " << this->name << std::endl;
}

void Person::display() const {
    std::cout << "Name: " << this->name << ", Age: " << this->age;
}
