#include<stdio.h>

int main(){
  int size, counter =0;
printf("Enter the size of the array you want to create: ");
      scanf("%d", &size);
  int arr[size];
  printf("Enter the Numbers for the array: ");
  for(int i = 0; i<size; i++){
  scanf("%d", &arr[i]);
  }

for(int i = 0; i<size; i++){
for(int j = i; j<size; j++){
int temp = 0;
if(arr[i]>arr[j]){
  temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}
}
}

printf("The element with maximum value is: %d \n", arr[size-1]);
printf("The element with minimum value is: %d \n", arr[0]);

  return 0;
}