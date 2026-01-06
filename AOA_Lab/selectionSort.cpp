#include<iostream>
using namespace std;

int main(){
int n=5;
int arr[n] = {50, 40, 30, 20, 10};
for(int i = 0; i<n-1; i++){
  int min = i;
  for(int j = i+1; j<n; j++){
    if(arr[j] < arr[min]){
      min = j;
    }
  }
  int temp = arr[i];
  arr[i] = arr[min];
  arr[min] = temp; 
}
for(int i = 0; i<5; i++){
  cout<<arr[i]<<" ";
}
}