#include <stdio.h>

int main() {
    int i;
  do{
    printf("Enter a Number: ");
    scanf("%d", &i);
    printf("%d \n", i);
    if(i%2 == 1){
      break;
    }
  }while(1);
return 0;
}

