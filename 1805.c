#include <stdio.h>

int main() {
    int a, b;
    long long sum = 0;
    scanf("%d %d", &a, &b);
    sum = (long long)(a + b) * (b - a + 1) / 2;
    printf("%lld\n", sum);
    return 0;
}

