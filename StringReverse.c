#include<stdio.h>
#include<string.h>

int main(){

    char str[20];

    printf("Enter the value in a string:");
    fgets(str,sizeof(str),stdin);


    int i = strlen(str)-2;

    while(i >= 0){
        printf("%c \n",str[i]);
        i--;
    }

    return 0;
}