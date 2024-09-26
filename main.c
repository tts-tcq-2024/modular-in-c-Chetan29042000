#include "color_pair_test.c"

int main() {
    // Test cases for converting pair numbers to ColorPair
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    // Test cases for converting ColorPair to pair numbers
    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    return 0;
}
