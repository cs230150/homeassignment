#include <iostream>
#include <fstream>
#include <vector>
#include <string>

struct Student {
    std::string name;
    int id;
    double grade;
};
void addStudent(std::vector<Student>& students) {
    Student newStudent;
    std::cout << "enter student's name: ";
    std::cin >> newStudent.name;
    std::cout << "Enter student's ID: ";
    std::cin >> newStudent.id;
    std::cout << "Enter student's grade: ";
    std::cin >> newStudent.grade;
    students.push_back(newStudent); 
}
void displayStudents(const std::vector<Student>& students) {
    for (const Student& student : students) {
        std::cout << "Name" << student.name << ", ID: " << student.id << "Grade: " << student.grade << std::endl;
    }
}
int main() {
    std::vector<Student> students;

    int choie;
    do {
        std::cout << "Menu\n1. Add Student\n2. Display Students\n3. quit\nEnter your choice: ";
        std::cin >> choie;

        switch (choie) {
            case 1:
            addStudent(students);
            break;
            case 2:
            displayStudents(students);
            break;
            case 3:
            std::cout << "Goodbye!" <<std::endl;
            break;
            case 4:
            std::cout << "Invalid choice. Try again." << std::endl;
        }

    }while (choie != 3);
    return 0;
}