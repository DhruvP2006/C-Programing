#include<stdio.h>

int main(){
  float distance;
  printf("Enter the distance between two cities: ");
  scanf("%f", &distance);
  printf("The distance in meters is: %f\n", distance*1000);
  printf("The distance in feets is: %f\n", distance*3280.84);
  printf("The distance in inches is: %f\n", distance*39370.1);
  printf("The distance in centimeters is: %f\n", distance*100000);
}