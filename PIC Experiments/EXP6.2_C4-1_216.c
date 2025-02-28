#include<stdio.h>

void arrMultiplication(int size1i, int size1j, int arr1[size1i][size1j], int size2i, int size2j, int arr2[size2i][size2j], int result[size1i][size2j]);

int main(){
int size1i, size1j;
printf("Enter the size of the first 2D array you want to create: ");
      scanf("%d %d", &size1i, &size1j);
  int arr1[size1i][size1j];
  printf("Enter the Numbers for the array: ");
  for(int i = 0; i<size1i; i++){
    for(int j = 0; j<size1j; j++){
      scanf("%d", &arr1[i][j]);
    }
  }

int size2i, size2j;
printf("Enter the size of the second 2D array you want to create: ");
      scanf("%d %d", &size2i, &size2j);
  int arr2[size2i][size2j];
  printf("Enter the Numbers for the array: ");
  for(int i = 0; i<size2i; i++){
    for(int j = 0; j<size2j; j++){
      scanf("%d", &arr2[i][j]);
    }
  }
  
  int result[size1i][size2j];

  arrMultiplication(size1i, size1j, arr1, size2i, size2j, arr2, result);

  for(int i = 0; i<size1i; i++){
    for(int j = 0; j<size2j; j++){
      printf("%d \t", result[i][j]);
    }
    printf("\n");
  }


  return 0;
}

void arrMultiplication(int size1i, int size1j, int arr1[size1i][size1j], int size2i, int size2j, int arr2[size2i][size2j], int result[size1i][size2j]){
  if(size1j==size2i){

    for(int i = 0; i<size1i; i++){
      for(int j = 0; j<size2j; j++){
        result[i][j]=0;
        for(int k=0; k<size1j; k++){
          result[i][j] += arr1[i][k]*arr2[k][j];
        }
      }
    }
  } else{
    printf("Array Multiplication Not Possible");
    return;
  }
}