
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* licenseKeyFormatting(char* s, int k) {
    int m = strlen(s);
    char *formatted = malloc((2*m + 1) * sizeof(char));
    if (formatted == NULL) return NULL;

    int j = 0;
    int count = 0;

    for (int i = m - 1; i >= 0; i--) {
        if (s[i] == '-') {
            continue;
        }

        if (count == k) {
            formatted[j++] = '-';
            count = 0;
        }

        formatted[j++] = toupper((unsigned char)s[i]);
        count++;
    }

    formatted[j] = '\0';

    for (int i = 0; i < j / 2; i++) {
        char temp = formatted[i];
        formatted[i] = formatted[j - 1 - i];
        formatted[j - 1 - i] = temp;
    }

    return formatted;
}
