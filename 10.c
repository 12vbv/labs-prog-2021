#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//Task 2
int digitsum(int num){
    if(num == 0)
        return 0;
    return num % 10 + digitsum((int)(num / 10));
}

//Task 1

typedef struct point{
    float x;
    float y;
}pnt;


float** arrDist(pnt* points, int n){
    float** arrtemp = (float**)malloc(n * sizeof(float*));
    int pos;
    float dist;

    for (int i = 0; i < n; ++i){
        pos = 0;
        arrtemp[i] = (float*)malloc((n - 1) * sizeof(float*));
        for (int j = 0; j < n; ++j){
            if (i == j) continue;
            pnt A = points[i];
            pnt B = points[j];
            dist = sqrt((A.x - B.x) * (A.x - B.x) + (A.y - B.y) * (A.y - B.y));
            arrtemp[i][pos] = dist;
            pos++;
        }
    }
    return arrtemp;
};

void printArray(float **arr, int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - 1; j++)
            printf("%f ", arr[i][j]);
        printf("\n\n");
    }
    printf("\n\n");
};

int main(){
    int n = 5;
    struct point arr[n];

    for(int i = 0; i < n; i++){
        arr[i].x = i;
        arr[i].y = 0;
    }

    float **result = arrDist(arr, n);
    printArray(result, n);

    int number = 0;
    scanf("%d", &number);
    printf("\n%d", digitsum(number));
    
    return 0;
}