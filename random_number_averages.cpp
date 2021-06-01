// Copyright (c) 2021 Caylee Annett All rights reserved
//
// Created by Caylee Annett
// Created on June 2021
// This program calculates the average of ten random numbers and uses an array

#include <iostream>
#include <random>
#include <array>

int main() {
    // This function calculates the average
    int numberList[10];
    float sumOfNumbers = 0;
    int randomNumber;
    float average;

    // Process & Output
    std::cout << "This program calculates the average of 10 random numbers."
        << std::endl;
    std::cout << "" << std::endl;
    for (int loopCounter = 0; loopCounter < 10; loopCounter++) {
        std::random_device rseed;
        std::mt19937 rgen(rseed());
        std::uniform_int_distribution<int> idist(1, 100);
        randomNumber = idist(rgen);
        std::cout << "The random number is: " << randomNumber << std::endl;
        numberList[loopCounter] = randomNumber;
    }
    for (int loopCounter = 0; loopCounter < sizeof(numberList);
        loopCounter++) {
        sumOfNumbers = sumOfNumbers + numberList[loopCounter];
    }
    average = sumOfNumbers / 10;
    std::cout << "" << std::endl;
    std::cout << "The average is: " << average << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
