#include <iostream>

#include <string>

 

class Student {

protected:

    int studentID;

    std::string name;

 

public:

    Student(int id, std::string studentName)

        : studentID(id), name(studentName) {}

 

    virtual void displayInfo() const {

        std::cout << "Student ID: " << studentID << std::endl;

        std::cout << "Name:       " << name       << std::endl;

    }

 

    virtual ~Student() {}

};

 

int main() {

    Student s(101, "Shubham");

    s.displayInfo();

    return 0;

}
