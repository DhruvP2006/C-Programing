#include<iostream>
using namespace std;

int main(){
  int n=5;
int arr[n] = {50, 40, 30, 20, 10};
for(int i = 0; i<n; i++){
  for(int j = 0; j<n; j++){
    if(arr[i]<arr[j]){
      int temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    }
  }
}
for(int i = 0; i<5; i++){
  cout<<arr[i]<<" ";
}
}