/*
 * Name: Rebecca Wanjiru
 * Admission Number: CT101/G/26586/25
 * Course: Bachelors of Science in Computer Science
 * Year: 2.1
 * University: Kirinyaga University
 * Unit: Object Oriented Programming
 * Assignment: Week 1 - Driving Test Result Evaluation System
 */

#include <iomanip>
#include <iostream>
#include <string>

int main() {
    std::string studentName;
    double theoryMarks;
    double practicalMarks;

    // Read the learner's name and the two test marks.
    std::cout << "Enter student name: ";
    std::getline(std::cin, studentName);

    std::cout << "Enter theory test marks (0-100): ";
    std::cin >> theoryMarks;

    std::cout << "Enter practical test marks (0-100): ";
    std::cin >> practicalMarks;

    if (!std::cin || theoryMarks < 0 || theoryMarks > 100 ||
        practicalMarks < 0 || practicalMarks > 100) {
        std::cout << "Invalid marks entered. Marks must be between 0 and 100.\n";
        return 1;
    }

    // The average is calculated using both test marks.
    const double averageScore = (theoryMarks + practicalMarks) / 2.0;
    const bool passed = averageScore >= 50.0;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\n========== DRIVING TEST RESULT ==========\n";
    std::cout << "Student name:    " << studentName << '\n';
    std::cout << "Theory marks:    " << theoryMarks << '\n';
    std::cout << "Practical marks: " << practicalMarks << '\n';
    std::cout << "Average score:   " << averageScore << '\n';
    std::cout << "Result:          " << (passed ? "Passed" : "Failed") << '\n';
    std::cout << "==========================================\n";

    return 0;
}
