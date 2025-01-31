#include<stdio.h>

int main(){
  int n, sum=0;
  printf("Enter a Number: ");
  scanf("%d", &n);
  for(int i =1; i<=n; i++){
    printf("%d \t", i*i);
    sum += i*i;
  }
  printf("\nSum of first %d natural numbers is %d", n, sum);
  return 0;
}