// Copyright (c) 2022 Marcus Wehbi All rights reserved
// Created by: Marcus Wehbi
// Created on: Nov 14 2022
// Nested loop that prints out all valid RGB colors from 0 - 255

#include <iostream>
#include <string>

int main() {
    // initialize 3 counters (each colour)
    int red;
    int green;
    int blue;

    // generate all of the rgb color codes
    // For loop to go through all red numbers
    for (red = 0; red < 255; red++) {
        // For loop to go through all green numbers
        for (green = 0; green < 255; green++) {
            // For loop to go through all blue numbers
            for (blue = 0; blue < 255; blue++) {
                // Print each colour in the colour it represents
                printf("\033[1;38;2;%i;%i;%imRGB(%i, %i, %i)",
                red, green, blue, red, green, blue);
            }
        }
    }
}
