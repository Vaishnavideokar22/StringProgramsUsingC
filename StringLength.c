#include<stdio.h>
#include<string.h>

int main(){

    char str[25];

    printf("Enter The value of the string:");
    fgets(str,sizeof(str),stdin);

    int count = 0;
    int i = 0;

    while(str[i] != '\n'){
        count++;
        i++;

    }

    printf("The length of the string is: %d \n",count);

    return 0;
}