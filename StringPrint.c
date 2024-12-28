#include<stdio.h>

int main(){

char str[10];

printf("Enter the values of string :");
fgets(str,sizeof(str),stdin);

// puts(str);

printf(" The string is:%s \n",str);


}