#include<iostream>
using namespace std;

int main(){
int n=5;
int arr[n] = {50, 40, 30, 20, 10};
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
          while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
for(int i = 0; i<5; i++){
  cout<<arr[i]<<" ";
}
}