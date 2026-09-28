/*
 * Name: Rebecca Wanjiru
 * Admission Number: CT101/G/26586/25
 * Course: Bachelors of Science in Computer Science
 * Year: 2.1
 * University: Kirinyaga University
 * Unit: Object Oriented Programming
 * Assignment: Week 1 - Mobile Phone Sales Receipt System
 */

#include <iomanip>
#include <iostream>
#include <string>

int main() {
    std::string customerName;
    std::string phoneModel;
    int quantityBought;
    double pricePerPhone;

    // Collect the details of the phone sale from the sales attendant.
    std::cout << "Enter customer name: ";
    std::getline(std::cin, customerName);

    std::cout << "Enter phone model purchased: ";
    std::getline(std::cin, phoneModel);

    std::cout << "Enter quantity bought: ";
    std::cin >> quantityBought;

    std::cout << "Enter price per phone (KSh): ";
    std::cin >> pricePerPhone;

    // Reject invalid numbers before calculating the receipt.
    if (!std::cin || quantityBought <= 0 || pricePerPhone < 0) {
        std::cout << "Invalid quantity or price entered.\n";
        return 1;
    }

    // Total sales amount is the quantity multiplied by the unit price.
    const double totalSalesAmount = quantityBought * pricePerPhone;

    // Print all sale details in a simple receipt format.
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\n========== MOBILE PHONE SALES RECEIPT ==========\n";
    std::cout << "Customer name:       " << customerName << '\n';
    std::cout << "Phone model:         " << phoneModel << '\n';
    std::cout << "Quantity bought:     " << quantityBought << '\n';
    std::cout << "Price per phone:     KSh " << pricePerPhone << '\n';
    std::cout << "Total sales amount:  KSh " << totalSalesAmount << '\n';
    std::cout << "=================================================\n";

    return 0;
}
