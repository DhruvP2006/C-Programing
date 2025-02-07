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

  for(int i = 0; i<size; i++){
  for(int j = i+1; j<size; j++){
    if(arr[i]==arr[j]){
      counter++;
    };
  }
  }

  printf("The number of duplicates in the given array is: %d", counter);

  return 0;
}