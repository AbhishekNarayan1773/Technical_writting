/**
 * @file example.cpp
 * @brief Demonstrates Doxygen documentation comments in C++.
 * @author Abhishek Narayan Hathwala
 * @date 2026
 */

#include <iostream>
#include <string>

using namespace std;

/**
 * @class Student
 * @brief Represents a student.
 *
 * This class stores student information
 * and provides functions to display it.
 */
class Student {
private:
    int rollNumber;
    string name;
    string branch;

public:

    /**
     * @brief Constructor to initialize student details.
     * @param roll Student roll number.
     * @param studentName Student name.
     * @param studentBranch Student branch.
     */
    Student(int roll, string studentName, string studentBranch) {
        rollNumber = roll;
        name = studentName;
        branch = studentBranch;
    }

    /**
     * @brief Displays student information.
     *
     * Prints the roll number, name, and branch.
     */
    void display() {
        cout << "Student Information" << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Branch: " << branch << endl;
    }

    /**
     * @brief Returns the student's roll number.
     * @return Student roll number.
     */
    int getRollNumber() {
        return rollNumber;
    }
};

/**
 * @brief Adds two integers.
 * @param a First integer.
 * @param b Second integer.
 * @return Sum of the two integers.
 */
int add(int a, int b) {
    return a + b;
}

/**
 * @brief Main function of the program.
 * @return 0 if the program executes successfully.
 */
int main() {

    Student s1(2025, "Abhishek", "Computer Science");

    s1.display();

    int result = add(10, 20);

    cout << "\nSum of two numbers: " << result << endl;

    return 0;
}