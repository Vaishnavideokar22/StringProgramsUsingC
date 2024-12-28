#include<stdio.h>

int main(){

  char str[15];

  printf("Enter the value of the string:");
  fgets(str,sizeof(str),stdin);

  int i = 0;

  while(str[i] != '\n'){
    printf("%c \n",str[i]);

    i++;

  }

    return 0;
}