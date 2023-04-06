#include <stdio.h>

int main() {
    double x = 234.345;
    double y = 45.698;
    printf("%.6lf - %.6lf\n", x, y);

    printf("%.0lf - %.0lf\n", x, y);

    printf("%.1lf - %.1lf\n", x, y);
    printf("%.2lf - %.2lf\n", x, y);
    printf("%.3lf - %.3lf\n", x, y);
    printf("%e - %e\n", x, y);
    printf("%E - %E\n", x, y);
    printf("%g - %g\n", x, y);
    printf("%G - %G\n", x, y);

    return 0;
}

