#include <stdio.h>
#include "color_pair.h"

// Array for storing major color names
const char* MajorColorNames[] = { "White", "Red", "Black", "Yellow", "Violet" };

// Array for storing minor color names
const char* MinorColorNames[] = { "Blue", "Orange", "Green", "Brown", "Slate" };

// Number of minor colors
const int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

// Converts a ColorPair to a string representation
void ColorPairToString(const ColorPair* colorPair, char* buffer) {
    sprintf(buffer, "%s %s", MajorColorNames[colorPair->majorColor], MinorColorNames[colorPair->minorColor]);
}

// Gets a ColorPair from a given pair number
ColorPair GetColorFromPairNumber(int pairNumber) {
    ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.majorColor = (enum MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
    colorPair.minorColor = (enum MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
    return colorPair;
}

// Gets the pair number from a ColorPair
int GetPairNumberFromColor(const ColorPair* colorPair) {
    return colorPair->majorColor * numberOfMinorColors + colorPair->minorColor + 1;
}
