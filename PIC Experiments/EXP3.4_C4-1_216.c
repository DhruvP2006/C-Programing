#include<stdio.h>

int main(){
  int a;
  double sum = 0.0;
  printf("Enter a Number: ");
  scanf("%d", &a);
  for(int i=1; i<=a; i++){
    printf("1/%d", i);
    if(i!=a){
      printf(" + ");
    }
    sum += 1.0 / i;
  }

  printf("\nSum of the harmonic series: %.6f\n", sum);
  return 0;
}