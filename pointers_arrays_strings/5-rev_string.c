#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s) {
    if (s == NULL)
        return;

    int length = 0;
    // Calculate the length of the string
    while (s[length] != '\0') {
        length++;
    }

    // Swap characters from the beginning and end of the string
    for (int i = 0; i < length / 2; i++) {
        char temp = s[i];
        s[i] = s[length - i - 1];
        s[length - i - 1] = temp;
    }
}
