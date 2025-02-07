#include<stdio.h>

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

  int arrSum[2][2];
  for(int i = 0; i<2; i++){
    for(int j = 0; j<2; j++){
      arrSum[i][j] = arr1[i][j] + arr2[i][j]; 
        }}

  printf("The First array is: \n");
for(int i = 0; i<2; i++){
    for(int j = 0; j<2; j++){
      printf("%d \t", arr1[i][j]);
    }
    printf("\n");
  }
  printf("The Second array is: \n");
for(int i = 0; i<2; i++){
    for(int j = 0; j<2; j++){
      printf("%d \t", arr2[i][j]);
    }
    printf("\n");
  }
  printf("The sum of the two arrays is: \n");
for(int i = 0; i<2; i++){
    for(int j = 0; j<2; j++){
      printf("%d \t", arrSum[i][j]);
    }
    printf("\n");
  }
  return 0;

}
