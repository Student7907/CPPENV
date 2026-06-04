#include <iostream>

 

class Student {

private:

    int studentID;

    string name;

 

public:

    Student(int studentID, string name) {

        studentID = studentID;

        name = name;

    }

 

    void displayInfo() {

        cout << "Student ID: " << studentID << endl;

        cout << "Name: " << name << endl;

    }

};

 

int main() {

    Student s(101, "Shubham");

    s.displayInfo();

    return 0;

}

