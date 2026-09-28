/*
 * Name: Rebecca Wanjiru
 * Admission Number: CT101/G/26586/25
 * Course: Bachelors of Science in Computer Science
 * Year: 2.1
 * University: Kirinyaga University
 * Unit: Object Oriented Programming
 * Assignment: Week 2 - Admission Decision Using Nested If Statements
 */

#include <iostream>
#include <string>

int main() {
    std::string studentName;
    int age;
    double examScore;
    std::string decision;

    // Read the applicant's identifying information and examination score.
    std::cout << "Enter student name: ";
    std::getline(std::cin, studentName);

    std::cout << "Enter age: ";
    std::cin >> age;

    std::cout << "Enter exam score (0-100): ";
    std::cin >> examScore;

    if (!std::cin || age < 0 || examScore < 0 || examScore > 100) {
        std::cout << "Invalid age or exam score entered.\n";
        return 1;
    }

    // The outer if checks the age requirement before the nested score check.
    if (age >= 18) {
        if (examScore >= 50) {
            decision = "Admitted";
        } else {
            decision = "Not Admitted: Low Score";
        }
    } else {
        decision = "Not Admitted: Underage";
    }

    std::cout << "\n========== ADMISSION DECISION ==========\n";
    std::cout << "Student name: " << studentName << '\n';
    std::cout << "Age:          " << age << '\n';
    std::cout << "Exam score:   " << examScore << '\n';
    std::cout << "Decision:     " << decision << '\n';
    std::cout << "========================================\n";

    return 0;
}
