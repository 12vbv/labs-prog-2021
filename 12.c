#include <stdio.h>
#include <stdbool.h>

int main(){
    char filename[128];
    bool even = false;
    char ch;
    
    scanf("%s", filename);
    FILE *inp = fopen(filename, "r");

    while(ch != EOF){
        ch = getc(inp);
        if(ch == '\n')
            even = !even;
        if(even)
            printf("%c", ch);
    }
    printf("\n");
    fclose(inp);
    return 0;
}