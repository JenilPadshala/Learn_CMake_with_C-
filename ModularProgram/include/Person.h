#ifndef PERSON_H
#define PERSON_H

#include<string>
#include <iostream>

class Person {
protected:
    std::string name;
    int age;
public:
    Person(const std::string& name, int age);
    virtual ~Person(); 
    
    virtual void display() const;
};
#endif