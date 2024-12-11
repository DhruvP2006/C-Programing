#include<iostream>
using namespace std;

int main(){
 int t, n, k;
 cin>>t;
 while(t>0){
  n = 0;
  k = 0;
  cin>>n>>k;
  int min_slice = 10*n;
  int max_slice = 12*n;
  if(min_slice<k && k<max_slice){
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }
  t--;
 }

return 0;
}