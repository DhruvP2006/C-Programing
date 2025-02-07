#include<stdio.h>

int main(){
    int sizei;
printf("Enter the size of the array you want to create: ");
      scanf("%d", &sizei);
  int arr[sizei], revArr[sizei];
  printf("Enter the Numbers for the array: ");
  for(int i = 0; i<sizei; i++){
  scanf("%d", &arr[i]);
  }

printf("The entered array is: \n");
  for(int j = 0; j<sizei; j++){
    printf("%d \t", arr[j]);
  }

  for(int i =sizei-1; i>=0; i--){
    revArr[i] = arr[sizei-i-1];
  }

  printf("\nThe Reversed array is: \n");
  for(int j = 0; j<sizei; j++){
    printf("%d \t", revArr[j]);
  }

  return 0;
}
