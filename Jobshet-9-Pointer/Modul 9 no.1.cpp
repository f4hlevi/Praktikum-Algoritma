// created by Fajri Alhidra Fahlevi, nim: 23343062
#include <stdio.h>

int main() {
    char string[] = "BORLAND";
    char *ptr = string;

    while (*ptr != '\0') {
        printf("%s\n", ptr);
        ptr++;
    }

    return 0;
}
