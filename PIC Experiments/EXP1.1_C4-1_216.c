#include<stdio.h>
#include<math.h>

# define pi 3.14159;

int main(){
  float radius;

  printf("Enter the radius of the circle: ");
  scanf("%f", &radius);

  float area = radius*radius*pi;
  float circumference = 2*radius*pi;

  printf("The area of the circle is: %f \n", area);
  printf("The circumference of the circle is: %f \n", circumference);

  return 0;
}
