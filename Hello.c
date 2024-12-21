#include<stdio.h>
#include<string.h>

int countLength(char arr[]);

int main(){
  char name[100];
  printf("Enter your Name: ");
  fgets(name, 100, stdin);
  printf("%d", strlen(name));
}

int countLength(char arr[]){
    int counter = 0;
  for(int i = 0; arr[i] != '\0'; i++){
    counter++;
  }
  return counter-1;
}