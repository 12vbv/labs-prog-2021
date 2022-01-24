#include <stdio.h>
#include <string.h>

int main(){

    char str1[100];
    char str2[100];
    int n = 3;

    scanf("%s\n", &str1);
    scanf("%s", &str2);

    //Task 1
    if(strcmp(str1, str2) == 0){
        printf("Strings are equal\n\n");
    }
    else{
        printf("Strings are not equal\n\n");
    }

    //Task 2
    if(strncmp(str1, str2, n) == 0){
        printf("Chars in strings up to %d are equal\n\n", n);
    }
    else{
        printf("Chars in strings up to %d are not equal\n\n", n);
    }

    //Task 3
    printf("str1 is %d chars long\n\n", strlen(str1));

    //Task 4
    int count = 0;
    for(int i = 0; i < strlen(str2); i++){
        if(strchr(str1, str2[i]))
            count++;
    }
    printf("Found %d occurances of chars from str2 in str1\n\n", count);

    //Task 5
    char *token = strtok(str1, str2);    

	while(token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, str2);
	}

    return 0;
}