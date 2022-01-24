#include <stdio.h>
#include <math.h>


int main(){
    int a;
    int b;

    scanf("%d", &a); // Task 1

    printf("%o\n", a); // Task 2

    // Task 3
    printf("%o\n", a);
    printf("%o\n", a << 1);

    // Task 4
    printf("%o\n", a);
    printf("%o\n", ~a);

    // Task 5
    scanf("%o", &b);
    printf("%o\n", b ^ a);

    return 0;
}