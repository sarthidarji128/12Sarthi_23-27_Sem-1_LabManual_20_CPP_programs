// Header file for Student class
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Definition of Student class
class Student {
private:
    string name; // Name of the student
    vector<int> grades; // Grades of the student

public:
    // Constructor of Student class that takes a string argument for the name of the student
    Student(string n) : name(n) {}

    // Method to add a grade to the student's grade list
    void addGrade(int grade) {
        grades.push_back(grade);
    }

    // Method to calculate the average grade of the student
    double calculateAverage() {
        double sum = 0;
        for (int grade : grades) {
            sum += grade;
        }
        return grades.empty() ? 0 : sum / grades.size();
    }

    // Method to display the information of the student
    void displayInfo() {
        cout << "Student: " << name << endl;
        cout << "Grades: ";
        for (int grade : grades) {
            cout << grade << " ";
        }
        cout << endl;
        cout << "Average Grade: " << calculateAverage() << endl;
    }

    // Default constructor of Student class
    Student() {}
};

// Main function to demonstrate the functionality of the Student class
int main() {
    // Creating two student objects and adding grades to their grade lists
    Student s1("John Doe");
    s1.addGrade(80);
    s1.addGrade(85);
    s1.addGrade(90);

    // Displaying the information of the first student
    s1.displayInfo();

    // Creating another student object and adding grades to their grade list
    Student s2("Jane Doe");
    s2.addGrade(70);
    s2.addGrade(75);
    s2.addGrade(80);

    // Displaying the information of the second student
    s2.displayInfo();

    return 0;
}