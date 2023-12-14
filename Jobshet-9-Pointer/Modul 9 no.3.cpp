// created by Fajri Alhidra Fahlevi, nim: 23343062
#include <stdio.h>

int main() {
    // A. Lesley = 57082
    int Lesley = 57082;
    int Layla = Lesley;
    int Balmond = Layla + 1;

    // a) Nilai Layla
    printf("a) Nilai Layla: %d\n", Layla);

    // b) Nilai Balmond
    printf("b) Nilai Balmond: %d\n", Balmond);

    // B. Lesley = 57082
    int LesleyB = 57082;
    int *LaylaB = &LesleyB;
    int BalmondB = *LaylaB + 1;

    // a) Nilai Layla
    printf("a) Nilai Layla: %d\n", *LaylaB);

    // b) Nilai Balmond
    printf("b) Nilai Balmond: %d\n", BalmondB);

    return 0;
}
