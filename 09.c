#include <stdio.h>

//Task 1
int phone(){
    float mins = 0;
    float cost = 0;
    float pluscost = 0;
    float freemins = 499;
    float extramins = 0;

    scanf("%f", &mins);
    scanf("%f", &cost);
    do
        scanf("%f", &pluscost);
    while(!(pluscost > (cost / freemins)));

    if(mins >= freemins)
        extramins = mins - freemins;

    return cost + (extramins * pluscost);
}

//Task 2
void primes(int input){
    int temp;
    for(int i = 2; i <= input; i++){
        temp = 0;
        for(int j = 1; j <= i; j++){
            if(!(i % j))
                temp++;
        }
        if(temp == 2)
            printf("%d ", i);
    }
}

int main() {
    int n;

    printf("%d\n", phone());
    scanf("%d", &n);
    primes(n);
    return 0;
}
