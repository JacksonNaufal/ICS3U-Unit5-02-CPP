// Copyright (c) 2022 Jackson Naufal All rights reserved
// Created By Jackson Naufal
// Created On March 2022
// This is a loop adder


#include <iostream>

int main() {
    // process & output
    try {
        for (int integerOne = 0; integerOne < 256; integerOne++) {
            for (int integerTwo = 0; integerTwo < 256; integerTwo++) {
                 for (int integerThree = 0; integerThree < 256;
                    integerThree++) {
                     std::cout << "RGB, " << integerOne << ", " << integerTwo
                     << ", " << integerThree << std::endl;
                }
            }
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid Input.";
    }
    std::cout << "\nDone." << std::endl;
}
