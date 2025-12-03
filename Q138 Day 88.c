#include <stdio.h>

enum Colors { RED, YELLOW, GREEN };

int main() {
    enum Colors color;
    const char *colorNames[] = { "RED", "YELLOW", "GREEN" };

    for(color = RED; color <= GREEN; color++) {
        printf("%s=%d\n", colorNames[color], color);
    }

    return 0;
}
