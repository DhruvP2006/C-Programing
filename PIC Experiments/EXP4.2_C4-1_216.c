#include<stdio.h>

int main(){
int sizei;
printf("Enter the size of the array you want to create: ");
  scanf("%d", &sizei);
int arr[sizei], ascendingArr[sizei], decendingArr[sizei];
  printf("Enter the Numbers for the array: ");
  for(int i = 0; i<sizei; i++){
  scanf("%d", &arr[i]);
    ascendingArr[i] = arr[i];
    decendingArr[i] = arr[i];
  }

printf("The entered array is: \n");
  for(int j = 0; j<sizei; j++){
    printf("%d \t", arr[j]);
  }

for(int i = 0; i<sizei; i++){
for(int j = i; j<sizei; j++){
int temp = 0;
if(ascendingArr[i]>ascendingArr[j]){
  temp = ascendingArr[i];
  ascendingArr[i] = ascendingArr[j];
  ascendingArr[j] = temp;
}
temp = 0;
if(decendingArr[i]<decendingArr[j]){
  temp = decendingArr[i];
  decendingArr[i] = decendingArr[j];
  decendingArr[j] = temp;
}
}
}

printf("\nThe Ascending array is: \n");
  for(int j = 0; j<sizei; j++){
    printf("%d \t", ascendingArr[j]);
  }

printf("\nThe Descending array is: \n");
  for(int j = 0; j<sizei; j++){
    printf("%d \t", decendingArr[j]);
  }

return 0;
}