#include "test_color.h"

int main() {
    // Test the mapping of pair numbers to color pairs
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    // Test the mapping of color pairs to pair numbers
    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    return 0;
}
