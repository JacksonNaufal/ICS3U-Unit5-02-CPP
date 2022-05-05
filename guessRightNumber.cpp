// Copyright (c) 2022 Jackson Naufal All rights reserved
// Created By Jackson Naufal
// Created On March 2022
// This is a loop adder


#include <iostream>

void TemperatureConversion() {
     std::string celsiusNumber;
    float fahrenheit;
    float celsius;
    
    // input
    std::cout << "Enter your number in °C!: ";
    std::cin >> celsiusNumber;
    std::cout << std::endl;
    
    try {
        celsius = std::stoi(celsiusNumber);
        fahrenheit = (celsius * 9 / 5) + 32;
        std::cout << "The temperature is "<< celsius << "°C and " << fahrenheit << "°F." <<std::endl;

    } catch (std::invalid_argument) {
        std::cout << "Invalid Input.";
    }
}

main() {
    TemperatureConversion();
    std::cout << "\nDone." << std::endl;
}
