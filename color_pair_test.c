#include <stdio.h>
#include <assert.h>
#include "color_pair.h"

// Tests number to ColorPair conversion for correctness
void testNumberToPair(int pairNumber, enum MajorColor expectedMajor, enum MinorColor expectedMinor) {
    ColorPair colorPair = GetColorFromPairNumber(pairNumber);
    char colorPairNames[16];
    ColorPairToString(&colorPair, colorPairNames);
    printf("Got pair %s\n", colorPairNames);
    assert(colorPair.majorColor == expectedMajor);
    assert(colorPair.minorColor == expectedMinor);
}

// Tests ColorPair to pair number conversion for correctness
void testPairToNumber(enum MajorColor major, enum MinorColor minor, int expectedPairNumber) {
    ColorPair colorPair = { major, minor };
    int pairNumber = GetPairNumberFromColor(&colorPair);
    printf("Got pair number %d\n", pairNumber);
    assert(pairNumber == expectedPairNumber);
}
