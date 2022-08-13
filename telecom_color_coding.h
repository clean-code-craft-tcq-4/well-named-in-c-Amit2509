#ifndef TELECOM_COLOR_CODING_H
#define TELECOM_COLOR_CODING_H

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

extern const char* MajorColorNames[]; 
extern int numberOfMajorColors;

extern const char* MinorColorNames[];
extern const int MAX_COLORPAIR_NAME_CHARS;
extern int numberOfMinorColors;

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

void ColorPairToString(const ColorPair* colorPair, char* buffer);
ColorPair GetColorFromPairNumber(int pairNumber);
int GetPairNumberFromColor(const ColorPair* colorPair);

#endif
