// Copyright (c) 2022 Ferdous Sediqi All rights reserved.
// Created by: Ferdous
// Created on: May 27. 2022
// In this program inside loop we generate random number and store it
// inside an array then using another function and for each
// loop we find the min value inisde the array


#include <iostream>
// including string
#include <time.h>
// include array
#include <ctime>
#include <array>
#include <string>
// including random number generator
#include <random>
using  std::string;


const int MAX_SIZE = 10;

// function to find min value 
int FindMinNum(std::array<int, 10> arrayOfNumber){
    // initialized min  number variable
    int MinValue = 101;
    // For each loop to find min number
    for (int number : arrayOfNumber){
        if (MinValue > number) {
            MinValue = number;
        }
    }
    return MinValue;
}

int main() {
    std::array<int, 10> arrayOfNumber;
    srand(time(NULL));

    // variables and constants
    int someRandomNumber;
    std::random_device rseed;
    // declare an array

    // foor loop to show the number added inside the loop    
    for(int counter = 0; counter < 10; counter++){
        // set random number range
        std::random_device rseed;
        std::mt19937 rgen(rseed()); // mersenne_twister
        std::uniform_int_distribution<int> idist(0,100); // [0,100]
        someRandomNumber = idist(rgen);
        // insert random number inside the array 
        arrayOfNumber[counter]= someRandomNumber;
        // display the number and its position in the array
        std::cout << someRandomNumber << " Added to the list at position " 
        << counter<< std::endl;
}
    // call the function
    int LowNumber = FindMinNum(arrayOfNumber);
    // display the max number
    std::cout << "The min value is " << LowNumber << std::endl;
}
