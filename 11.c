#include "head11.h"
#include "new11.c"


int main(){

    struct pentagon out;

    scanf("%f", &out.x);
    scanf("%f", &out.y);
    scanf("%f", &out.rad);
    scanf("%f", &out.angle);

    out.perimeter = findperimeter(out.rad);
    printf("Perimeter: %f", out.perimeter);
}