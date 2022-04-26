// Copyright (c) 2022 Michael Clermont All rights reserved
//
// Created by: Michael Clermont
// Created on: Feb 2022
// This program is a guessing game

#include <iostream>
#include <string>

int main() {
    // this function is a guessing game
    std::string numberAsString;
    int numberAsInt;
    int sumOfNumbers = 0;
    int num;

    // input
    std::cout << "How many numbers are you going to add: ";
    std::cin >> numberAsString;
    std::cout << "" << std::endl;

    // process & output
    try {
        numberAsInt = std::stoi(numberAsString);
        for (int loopCounter = 0; loopCounter < numberAsInt; loopCounter++) {
                std::cout << "Enter a number to add: ";
                std::cin >> num;
                if (num > 0) {
                    sumOfNumbers = sumOfNumbers + num;
                    continue;
                } else {
                    continue;
                }
        }
        std::cout << "\nThe sum is " << sumOfNumbers << "." << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "That is not an integer" << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
