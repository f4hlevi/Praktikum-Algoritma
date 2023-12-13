#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    int i, j;
    char temp;
    int length = strlen(str);

    j = length - 1;

    for (i = 0; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char kalimat[100];

    printf("Masukkan kalimat: ");
    gets(kalimat);

    reverseString(kalimat);

    printf("Kalimat terbalik: %s\n", kalimat);

    return 0;
}
