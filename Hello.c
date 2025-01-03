#include<stdio.h>
#include<string.h>

int main(){
  char oldString[] = "Hello";
  char newString[] = 'World';
  strcpy(newString, oldString);
  printf("s", newString);
  return 0;
}

