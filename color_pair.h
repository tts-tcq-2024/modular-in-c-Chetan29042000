#ifndef COLOR_PAIR_H
#define COLOR_PAIR_H

// Enumeration for major colors
enum MajorColor { WHITE, RED, BLACK, YELLOW, VIOLET };

// Enumeration for minor colors
enum MinorColor { BLUE, ORANGE, GREEN, BROWN, SLATE };

// Struct representing a color pair
typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

// Converts a ColorPair to a string representation
void ColorPairToString(const ColorPair* colorPair, char* buffer);

// Gets a ColorPair from a given pair number
ColorPair GetColorFromPairNumber(int pairNumber);

// Gets the pair number from a ColorPair
int GetPairNumberFromColor(const ColorPair* colorPair);

#endif // COLOR_PAIR_H
