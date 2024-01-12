#include <iostream>  // Include header for input/output operations
#include <vector>    // Include header for vector operations
#include <algorithm>  
using namespace std;  // Bring the std namespace into scope

class Student {
private:
    string name;      // Student's name
    int roll_number;  // Student's roll number
    float marks;      // Student's marks

public:
    // Constructor to initialize student details
    Student(string n, int r, float m) {
        name = n;
        roll_number = r;
        marks = m;
    }

    // Display student information
    void displayStudentDetails() {
        cout << "Name: " << name << ", Roll Number: " << roll_number << ", Marks: " << marks << endl;
    }

    // Getter functions for name and marks
    string getName() { return name; }
    float getMarks() { return marks; }
};

class StudentRecord {
private:
    vector<Student> students;  // Vector to store student objects

public:
    // Add a student to the record
    void addStudent(Student student) {
        students.push_back(student);
    }

    // Display details of all students
    void displayStudentDetails() {
        for (auto &student : students) {
            student.displayStudentDetails();
        }
    }

    // Calculate the average marks of all students
    float calculateAverageMarks() {
        float total_marks = 0;
        for (auto &student : students) {
            total_marks += student.getMarks();
        }
        return total_marks / students.size();
    }
};

int main() {
    StudentRecord sr;  // Create a StudentRecord object

    // Add students to the record
    sr.addStudent(Student("sarthi", 1, 90));
    sr.addStudent(Student("darji", 2, 97));
    sr.addStudent(Student("sam", 3, 92));

    // Display student details and average marks
    sr.displayStudentDetails();
    cout << "Average Marks: " << sr.calculateAverageMarks() << endl;

    return 0;  // Indicate successful program termination
}
