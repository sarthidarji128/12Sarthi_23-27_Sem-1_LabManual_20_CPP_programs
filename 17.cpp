#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Student {
    private:
        string name;
        int roll_number;
        float marks;

    public:
        Student(string n, int r, float m) {
            name = n;
            roll_number = r;
            marks = m;
        }

        void displayStudentDetails() {
            cout << "Name: " << name << ", Roll Number: " << roll_number << ", Marks: " << marks << std::endl;
        }

        string getName() {
            return name;
        }

        float getMarks() {
            return marks;
        }
};

class StudentRecord {
    private:
        vector<Student> students;

    public:
        void addStudent(Student student) {
            students.push_back(student);
        }

        void displayStudentDetails() {
            for (auto &student : students) {
                student.displayStudentDetails();
            }
        }

        float calculateAverageMarks() {
            float total_marks = 0;
            for (auto &student : students) {
                total_marks += student.getMarks();
            }
            return total_marks / students.size();
        }
};

int main() {
    StudentRecord sr;
    sr.addStudent(Student("sarthi", 1, 90));
    sr.addStudent(Student("darji", 2, 97));
    sr.addStudent(Student("sam", 3, 92));

    sr.displayStudentDetails();
    cout << "Average Marks: " << sr.calculateAverageMarks() << endl;

    return 0;
}