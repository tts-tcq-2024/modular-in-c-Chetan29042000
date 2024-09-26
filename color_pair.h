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

// Function prototypes
void ColorPairToString(const ColorPair* colorPair, char* buffer);
ColorPair GetColorFromPairNumber(int pairNumber);
int GetPairNumberFromColor(const ColorPair* colorPair);

#endif
