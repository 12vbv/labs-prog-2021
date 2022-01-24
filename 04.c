#include <stdio.h>

int main() {
    int a;
    int left = 20;
    int right = 30;

    scanf("%d", &a);

    printf((left <= a && a <= right) ? "True\n" : "False\n");

    //Task 2

    int b;
    scanf("%d", &b);
    printf("%d\n", (b >> 17-1) & 1);

    return 0;
}