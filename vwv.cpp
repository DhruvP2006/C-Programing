#include<iostream>
using namespace std;

int main(){
int t;
cin>>t;
while(t>0){
  int n = 0;
  cin>>n;
  int a[n];
  for(int i = 0; i<=n; i++){
    cin>>a[i];
  }
  int m = 0;
  for(int i = 0; i<=n; i++){
   for(int j = 1; j<=i; j++){
   if(a[i]<=a[j])
    m = i;
   }
  }
  a[m]++;
  int b =1;
  for(int i = 0; i<=n; i++){
    b = b*a[i];
  }
  cout<<b<<endl;
  
  t--;
}
}