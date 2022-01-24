#include <stdio.h>
#include <math.h>

//Task 1
enum Type{
    CAKE = 1,
    PIE = 2,
    BREAD = 3,
    PASTRY = 4,
    CANDY = 5
};

//Task 2
struct Line{
    float x1, y1;
    float x2, y2;
    float len;
} line1;

//Task 3
union Adsl{
    unsigned int hex;
    struct{
        unsigned int dsl :1;
        unsigned int ppp :1;
        unsigned int link :1;
    } bitfield;
} modem;

int main(){
    line1.x1 = 5;
    line1.y1 = 5;
    line1.x2 = 10;
    line1.y2 = -10;

    line1.len = sqrt(pow((line1.x1 - line1.x2), 2) + pow(line1.y1 - line1.y2, 2));
    printf("%d\n%f\n", CANDY, line1.len);
    scanf("%x", &modem.hex);
    modem.bitfield.dsl ? printf("DSL - ON\n") : printf("DSL - OFF\n");
    modem.bitfield.ppp ? printf("PPP - ON\n") : printf("PPP - OFF\n");
    modem.bitfield.link ? printf("LINK - ON\n") : printf("LINK - OFF\n");

    return 0;
}



