#include <stdio.h>

int main() {
    int a[9] = {99, 88, 77, 66, 55, 44, 33, 22, 11};
    
    printf("|");
    for(int i = 0; i < 9; i++){
        printf(" %d |", a[i]);
    }
    printf("\n");

    //Task 2

    int ar1[2][2] = {
        {2, 5},
        {2, 2}
    };
    int ar2[2][2] = {
        {1, 2},
        {0, 1}
    };
    int total[2][2];

    total[0][0] = ar1[0][0] * ar2[0][0] + ar1[0][1] * ar2[1][0];
    total[0][1] = ar1[0][0] * ar2[0][1] + ar1[0][1] * ar2[1][1];
    total[1][0] = ar1[1][0] * ar2[0][0] + ar1[1][1] * ar2[1][0];
    total[1][1] = ar1[1][0] * ar2[0][1] + ar1[1][1] * ar2[1][1];

    for(int i = 0; i < 2; i++){
        printf("|");
        for(int j = 0; j < 2; j++){
            printf(" %d |", total[i][j]);
        }
        printf("\n");
    }

    return 0;

}

//99 88 77 66 55 44 33 22 11