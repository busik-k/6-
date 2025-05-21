#include <stdio.h>

int main() {
    // Creating array with 3 strings
    char colors[3][15] = {"красный", "синий", "зеленый"};

    // Printing array
    for (int i = 0; i < 3; i++) {
        printf("%s\n", colors[i]);
    }

    return 0;
}
