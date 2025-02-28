#include<stdio.h>

double mean(int arr[], int size);
double median (int arr[], int size);
int mode (int arr[], int size);
int sort(int arr[], int size);

int main(){
  int size;
  printf("Enter the Size of the Array: ");
  scanf("%d", &size);
  int arr[size];
  printf("Enter the Elements of the Array: ");
 
for(int i = 0; i<size; i++){
  scanf("%d", &arr[i]);
}

printf("The Mean of the array is: %lf\n", mean(arr, size));
printf("The Median of the array is: %lf\n", median(arr, size));
printf("The Mode of the array is: %d\n", mode(arr, size));

  return 0;
}

double mean(int arr[], int size){
  int sum = 0;
  for(int i = 0; i<size; i++){
    sum+= arr[i];
  }
  return (double)sum/size;
} 

double median(int arr[], int size){
  sort(arr, size);
if(size%2){
  return arr[(size-1)/2];
} else{
  return arr[size/2];

}
}

int mode(int arr[], int size){
  sort(arr, size);
  int maxFreq = 1, currentFreq = 1, modeValue = arr[0];

  for(int i = 1; i<size; i++){
    if(arr[i] == arr[i-1]){
      currentFreq++;
    } else{
      currentFreq = 1;
    }
    if(currentFreq>maxFreq){
      maxFreq = currentFreq;
      modeValue = arr[i];
    }
  }
  return modeValue;
}

int sort(int arr[], int size){
for(int i = 0; i<size; i++){
for(int j = i+1; j<size; j++){
int temp = 0;
if(arr[i]>arr[j]){
  temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}
}
}
}