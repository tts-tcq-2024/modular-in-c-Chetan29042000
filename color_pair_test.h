#ifndef COLOR_PAIR_TEST_H
#define COLOR_PAIR_TEST_H

#include "color_pair.h"

void testNumberToPair(int pairNumber, enum MajorColor expectedMajor, enum MinorColor expectedMinor);
void testPairToNumber(enum MajorColor major, enum MinorColor minor, int expectedPairNumber);

#endif 
