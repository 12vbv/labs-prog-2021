#include <stdio.h>
#include <stdlib.h>

int main(){

    //Task 1
    int arr1[4];
    int* arr1p = arr1;
    arr1p[0] = 50;
    arr1p[1] = 40;
    arr1p[2] = 30;
    arr1p[3] = 20;

    for(int i = 0; i < 4; i++)
        printf("%d ", *(arr1p + i));

    printf("\n");
    
    //Task 2
    int* arr2 = (int*)malloc(4 * sizeof(int));

    arr2[0] = 50;
    arr2[1] = 40;
    arr2[2] = 30;
    arr2[3] = 20;

    for(int i = 0; i < 4; i++)
        printf("%d ", arr2[i]);

    free(arr2);

    return 0; 
}