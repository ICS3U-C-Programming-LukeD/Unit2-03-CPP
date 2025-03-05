// Copyright (c) 2025 Luke Di Bert All rights reserved.
//
// Created by: Luke Di Bert
// Date: March 4, 2025
// Calculates price of pizza using diameter

#include <cmath>
// adds math library
#include <iomanip>
// adds iomanip library for rounding
#include <iostream>
// adds iostream library
const float HST = 0.13;
// defines tax as a constant
int main() {
    int diameter;
    // creates a variable to store diameter input
    std::cout << "Calculates pizza price from diameter" << std::endl;
    // introduces program
    std::cout << "Enter diameter: " << std::endl;
    // prompts user to give diameter of desired pizza
    std::cin >> diameter;
    // stores user input inside the diameter variable
    float subtotal = 4.25 + (1.5 * diameter);
    // calculates subtotal
    float tax = HST * subtotal;
    // calculates tax
    float total = subtotal + tax;
    // calculates total
    std::cout << std::fixed << std::setprecision(2)
    << std::setfill('0') << total << "\n";
    // rounds the total to 2 decimal places
    std::cout << "The total is: " << (total) << std::endl;
    // displays the total
}
