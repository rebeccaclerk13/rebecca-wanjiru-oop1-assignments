/*
 * Name: Rebecca Wanjiru
 * Admission Number: CT101/G/26586/25
 * Course: Bachelors of Science in Computer Science
 * Year: 2.1
 * University: Kirinyaga University
 * Unit: Object Oriented Programming
 * Assignment: Week 6 - Library Book Management System
 */

#include <iostream>
#include <string>

class Book {
private:
    std::string title;
    std::string author;
    int copiesAvailable;

public:
    void inputDetails();
    void borrowBook();
    void displayDetails() const;
};

void Book::inputDetails() {
    // Read the book information that will be stored in the object.
    std::cout << "Enter book title: ";
    std::getline(std::cin >> std::ws, title);

    std::cout << "Enter author: ";
    std::getline(std::cin, author);

    std::cout << "Enter number of copies available: ";
    std::cin >> copiesAvailable;

    if (copiesAvailable < 0) {
        std::cout << "Copies cannot be negative.\n";
        copiesAvailable = 0;
    }
}

void Book::borrowBook() {
    // A borrowing operation can only reduce the count when a copy exists.
    if (copiesAvailable > 0) {
        --copiesAvailable;
        std::cout << "Book borrowed successfully.\n";
    } else {
        std::cout << "No copies available for borrowing.\n";
    }
}

void Book::displayDetails() const {
    // Display the object's current state after the borrowing attempt.
    std::cout << "\n========== BOOK DETAILS ==========\n";
    std::cout << "Title:             " << title << '\n';
    std::cout << "Author:            " << author << '\n';
    std::cout << "Copies available:  " << copiesAvailable << '\n';
    std::cout << "==================================\n";
}

int main() {
    Book book;

    // Create one Book object and demonstrate its required operations.
    book.inputDetails();

    if (!std::cin) {
        return 1;
    }

    book.borrowBook();
    book.displayDetails();
    return 0;
}
