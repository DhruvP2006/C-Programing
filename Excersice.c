// To calculate area of a square
// #include <stdio.h>

// int main(){
//   float side;
//   printf("Enter the side of the Square:");
//   scanf("%f", &side);
//   printf("area of the square is: %f", side * side);
//   return 0;
// }

// Area of cirlcle
// #include<stdio.h>

// int main(){
//   float radius;
//   printf("Enter the radius of the circle:");
//   scanf("%f", &radius);
//   printf("The area of the Circle is: %f", 3.14*radius*radius);
//   return 0;
// }

// Type conversion
// #include<stdio.h>
// int main(){
// printf("%d \n", 4>3 && 5>2);
//   return 0;
// }

// Number divisible by 2
// #include<stdio.h>
// int main(){
//   int a = 4;
//   printf("%d", a>9 && a<100);
//   return 0;
// }

// print avg of 3 no.
// #include<stdio.h>

// int main(){
//   int a, b, c;
//   printf("Enter 3 numbers: ");
//   scanf("%d", &a);
//   scanf("%d", &b);
//   scanf("%d", &c);
//   printf("The average of the 3 numbers is: %d", (a+b+c)/3);
// }

// pass fail
// #include<stdio.h>

// int main(){
//   int marks;
//   printf("Enter your marks: ");
//   scanf("%d", &marks);
//   if(marks<=30 && marks>=0){
//     printf("Fail\n");
//   }
//   else if(marks>30 && marks<=100){
//   printf("Pass\n");
//   }
//   else{
//     printf("Wrong marks\n");
//   }
//   marks<=30? printf("Fail"):printf("pass");
//   return 0;
// }

//grading of marks
// #include<stdio.h>

// int main(){
//   int marks;
//   printf("Enter your marks: ");
//   scanf("%d", &marks);
//   if(marks<30 && marks>=0){
//     printf("Grade: C\n");
//   }
//   else if(marks>=30 && marks<70){
//     printf("Grade: B\n");
//   }
//   else if(marks>=70 && marks<90){
//     printf("Grade: A\n");
//   }
//   else{
//     printf("Grade: A+\n")
//   }
//   return 0;
// }

//check upper or lower case
// #include<stdio.h>

// int main(){
//   char ch;
//   printf("Enter a Character: \n");
//   scanf("%c", &ch);
//   if(ch>='a' && ch<='z'){
//     printf("Lower case\n");
//   }
//   else if(ch>='A' && ch<='Z'){
//     printf("Upper Case \n");
//   }
//   else{
//     printf("Not an Alphabet\n");
//   }
// return 0;
// }

// odd numbers
// #include <stdio.h>

// int main() {
//   for(int i=5; i<=50; i++){
//     if(i%2==0){
//        continue;
//     }
//     printf("%d \n", i);
//   }

// return 0;
// }

//factorial
// #include<stdio.h>

// int main(){
//   int num;
//   int fact=1;
//   printf("Enter a Number: ");
//   scanf("%d", &num);
//   for(int i = num; i>=1; i--){
//     fact = i*fact;
//   }
//   printf("%d", fact);
//   return 0;
// }

// reverse table
// #include<stdio.h>

// int main(){
//   int num;
//   printf("Enter a Number: ");
//   scanf("%d", &num);
//   for(int i =10; i>=0; i--){
//     printf("%d \n", i*num);
//   }
//   return 0;
// }

// sum of no. between 5, 50
// #include<stdio.h>

// int main(){
//   int j = 0;
//   for(int i = 5; i<=50; i++){
//     j += i;
//   }
//   printf("%d", j);
// }

//functions
// #include<stdio.h>

// void indian();
// void french();

// int main(){
//   indian();
//   french();
//   return 0;
// }

// void indian(){
//   printf("Namaste\n");
// }

// void bye(){
//   printf("Bonjour\n");
// }

//sum function
// #include<stdio.h>

// int sum(int num1, int num2);

// int main(){
//   int a, b;
//   printf("Enter First Number: ");
//   scanf("%d", &a);
//   printf("Enter Second Number: ");
//   scanf("%d", &b);
//   int s = sum(a, b);
//   printf("%d", s);
// }

// int sum(int num1, int num2){
//   return num1 + num2;
  
// }

//tbale using function
// #include<stdio.h>

// int calcPrice(float price);

// int main(){
//   printf("Enter Price: ");
//   float a;
//   scanf("%f", &a);
//   calcPrice(a);
//   return 0;
// }

// int calcPrice(float price){
//   printf("%f", price+(price*0.18));
// }

// Square of a number
// #include<stdio.h>
// #include<math.h>

// int sqnum(int num);

// int main(){
//   printf("Enter a Number: ");
//   int a;
//   scanf("%d", &a);
//   sqnum(a);
//   return 0;
// }

// int sqnum(int num){
//   printf("%f", pow(num, 2));
// }

// Area of Square, Circle & rectangle
// #include<stdio.h>
// #include<math.h>

// float area_square(float side_square);
// float area_circle(float radius);
// float area_rectabgle(float side_a, float side_b);

// int main(){
//   int a, b, c, d;
//   printf("Enter the side of a Square:");
//   scanf("%f", &a);
//   area_square(a);
//     printf("Enter the radius of a Circle:");
//   scanf("%f", &b);
//   area_circle(b);
//     printf("Enter the side 1 of a Rectangle:");
//   scanf("%f", &c);
//    printf("Enter the side 2 of a Rectangle:");
//   scanf("%f", &d);
//   area_rectabgle(c, d);
//   return 0;
// }

// float area_square(float side_square){
//   printf("%f \n", pow(side_square, 2));
// }
// float area_circle(float radius){
//     printf("%f \n", 3.14*pow(radius,2));
// }
// float area_rectabgle(float side_a, float side_b){
//   printf("%f \n", side_a*side_b);
// }

// Recursion
// sum of n natural numbers
// #include<stdio.h>

// int natural_num(int n);

// int main(){
//  int sum = natural_num(5);
//  printf("%d", sum);
// }

// int natural_num(int num){
//   if(num ==1){
//     return 1;
//   }
//   int a = natural_num(num-1);
//   int b  = a+ num;
// }

// Factorial
// #include<stdio.h>

// int fact(int n);

// int main(){
//   printf("Factorial is :%d", fact(5));
// return 0;
// }

// int fact(int n){
//   if(0 == n){
//     return 1;
//   }
//   int factN = fact(n-1)*n;
//   return factN;
// }

// Function to convert Celcius to Fahrenheit
// #include<stdio.h>

// float convert(float c);

// int main(){
//   printf("The temperature in Farenheit is: %f", convert(5));
//   return 0;
// }

// float convert(float c){
//   float f = (c*(9/5))+32;
//   return f;
// }

// Calculate Percentage
// #include<stdio.h>

// float percentage(int science, int math, int sanskrit);

// int main(){
//   int sc = 98;
//   int math = 95;
//   int sans = 99;
//   printf("The total percentage is: %f", percentage(sc, math, sans));
//   return 0;
// }

// float percentage(int science, int math, int sanskrit){
//   return((science+math+sanskrit)/3);
// }


// print fibonacci series
// #include<stdio.h>

// int fibonacci(int n);

// int main(){
//   printf("%d", fibonacci(6));
// }

// int fibonacci(int n){
//   if(n == 0 || n == 1){
//     if(n==0){
//       return 0;
//     }
//     if(n==1){
//       return 1;
//     }
//       }
//   int fib = fibonacci(n-1)+fibonacci(n-2);
//   printf("%d", fib);
//   return fib;
// }

// Pointer ----------------------------------------------------------------
