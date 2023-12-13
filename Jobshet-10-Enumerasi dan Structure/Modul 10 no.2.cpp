#include <stdio.h>

struct Zodiac {
    int start_day;
    int start_month;
    char name[12];
};

struct Zodiac zodiacs[] = {
    {21, 3, "ARIES"},
    {20, 4, "TAURUS"},
    {21, 5, "GEMINI"},
    {21, 6, "CANCER"},
    {23, 7, "LEO"},
    {23, 8, "VIRGO"},
    {23, 9, "LIBRA"},
    {23, 10, "SCORPIO"},
    {22, 11, "SAGITTARIUS"},
    {22, 12, "CAPRICORN"},
    {20, 1, "AQUARIUS"},
    {19, 2, "PISCES"}
};

void findZodiac(int day, int month) {
    int i;
    for (i = 0; i < 12; ++i) {
        if ((day >= zodiacs[i].start_day && month == zodiacs[i].start_month) ||
            (month == zodiacs[i].start_month + 1 && day < zodiacs[i + 1].start_day)) {
            printf("Zodiak Anda adalah: %s\n", zodiacs[i].name);
            break;
        }
    }
}

int main() {
    int day, month, year;

    printf("Masukkan Tanggal Lahir Anda [tgl-bln-tahun] : ");
    scanf("%d-%d-%d", &day, &month, &year);

    printf("Tanggal Lahir Anda: %d-%d-%d\n", day, month, year);
    findZodiac(day, month);

    return 0;
}
