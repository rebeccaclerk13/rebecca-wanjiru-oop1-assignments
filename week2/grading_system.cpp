/*
 * Name: Rebecca Wanjiru
 * Admission Number: CT101/G/26586/25
 * Course: Bachelors of Science in Computer Science
 * Year: 2.1
 * University: Kirinyaga University
 * Unit: Object Oriented Programming
 * Assignment: Week 2 - Grading System Using an If-Else Ladder
 */

#include <iostream>
#include <string>

int main() {
    std::string studentName;
    double examMarks;
    char grade;

    // Ask for the student's name and examination marks.
    std::cout << "Enter student name: ";
    std::getline(std::cin, studentName);

    std::cout << "Enter exam marks (0-100): ";
    std::cin >> examMarks;

    if (!std::cin || examMarks < 0 || examMarks > 100) {
        std::cout << "Invalid marks entered. Marks must be between 0 and 100.\n";
        return 1;
    }

    // The if-else ladder checks the highest range first and selects one grade.
    if (examMarks >= 70) {
        grade = 'A';
    } else if (examMarks >= 60) {
        grade = 'B';
    } else if (examMarks >= 50) {
        grade = 'C';
    } else if (examMarks >= 40) {
        grade = 'D';
    } else {
        grade = 'E';
    }

    std::cout << "\n========== EXAMINATION GRADE ==========\n";
    std::cout << "Student name: " << studentName << '\n';
    std::cout << "Exam marks:   " << examMarks << '\n';
    std::cout << "Grade:        " << grade << '\n';
    std::cout << "========================================\n";

    return 0;
}
