// Copyright (c) 2022 Alex De Meo All rights reserved
//
// Created By: Alex De Meo
// Date: 04s//22
// Description: Displays every single rgb color along with its corresponding
// color code
#include <iostream>
#include <string>
#include <string_view>
using std::cout;

using std::endl;

int main() {
    int r = 0, b = 0, g = 0;
    // adds 1 to the r parameter unti lit reaches 255
    while (r <= 255) {
        // adds 1 to the g parameter until it reaches 255
        while (g <= 255) {
            // adds 1 to the b parameter until it reaches 255
            while (b <= 255) {
                // prints the rgb code with the corresponding color
                printf("\033[1;38;2;%i;%i;%imRGB(%i, %i, %i)\n",
                r, g, b, r, g, b);
                // adds 1 to b
                b += 1;
                }
            // adds 1 to g and resets b
            g += 1;
            b = 0;
        }
        // adds 1 to r and resets g and b
        r += 1;
        g = 0;
        b = 0;
    }
}
