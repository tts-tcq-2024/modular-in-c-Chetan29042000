#ifndef COLOR_PAIR_H
#define COLOR_PAIR_H

enum MajorColor { WHITE, RED, BLACK, YELLOW, VIOLET };
enum MinorColor { BLUE, ORANGE, GREEN, BROWN, SLATE };

typedef struct {
    enum MajorColor majorColor;  
    enum MinorColor minorColor;   
} ColorPair;

// Converts a ColorPair to a string representation.
void ColorPairToString(const ColorPair* colorPair, char* buffer);

// Gets a ColorPair from a given pair number.
ColorPair GetColorFromPairNumber(int pairNumber);

// Gets the pair number from a ColorPair.
int GetPairNumberFromColor(const ColorPair* colorPair);

// Tests number to ColorPair conversion.
void testNumberToPair(int pairNumber, enum MajorColor expectedMajor, enum MinorColor expectedMinor);

// Tests ColorPair to number conversion.
void testPairToNumber(enum MajorColor major, enum MinorColor minor, int expectedPairNumber);

#endif // COLOR_PAIR_H
