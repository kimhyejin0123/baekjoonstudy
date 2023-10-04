#include <stdio.h>

int f(int n) {
    int r = 0;
    while (n) r *= 10, r += n % 10, n /= 10;
    return r;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", f(f(a) + f(b)));
    return 0;
}