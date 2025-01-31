#include<stdio.h>

int main(){
  int n, sum, a = 0, i = 1, j = 1;
  printf("Enter a Number: ");
  scanf("%d", &n);
do
{
  sum += i;
  int temp = i;
  i = j;
  j = temp + j;
  a++;
}
while(a<n);
printf("\nSum of first %d is %d", n, sum);
return 0;
}