#include <stdio.h>
#include <math.h>


int main() {
    float m = 0;
    float z1 = 0;
    float z2 = 0;

    scanf("%f", &m);
    
	z1 = sqrt(pow(3 * m + 2, 2) - 24 * m) / (3 * sqrt(m) - (2 / sqrt(m)));
    z2 = -sqrt(m);
    printf("%f, %f", z1, z2);
    return 0;
}
