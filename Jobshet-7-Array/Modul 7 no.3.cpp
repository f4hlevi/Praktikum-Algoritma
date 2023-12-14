// created by Fajri Alhidra Fahlevi, nim: 233430620
#include <stdio.h>
#include <string.h>

int main() {
    char username[20];
    char password[20];

    // Username dan Password yang benar
    char correctUsername[] = "username";
    char correctPassword[] = "password123";

    // Meminta input username
    printf("Masukkan username: ");
    scanf("%s", username);

    // Meminta input password
    printf("Masukkan password: ");
    scanf("%s", password);

    // Memeriksa apakah username dan password benar
    if (strcmp(username, correctUsername) == 0 && strcmp(password, correctPassword) == 0) {
        printf("Berhasil login\n");
    } else {
        printf("Password salah\n");
    }

    return 0;
}
