#include <stdio.h>

int main() {
    int day, month, year;
    char slash;
    scanf("%d%c%d%c%d", &day, &slash, &month, &slash, &year);
    printf("%02d/%02d/%02d\n", month, day, year);
    printf("%02d/%02d/%02d\n", year, month, day);
    printf("%02d-%02d-%02d\n", day, month, year);

    return 0;
}

