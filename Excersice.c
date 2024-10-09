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

// nested loops