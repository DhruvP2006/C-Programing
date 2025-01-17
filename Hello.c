// #include<stdio.h>

// int main(){
// printf("%d \n", sizeof(int));
// printf("%d \n", sizeof(float));
// printf("%d \n", sizeof(char));

//   return 0;
// }

// #include<stdio.h>

// int main(){
//   int a = 25;
//   float b= 5.67;
//   char ch = 'g';
//   char s[] = "Hello";

//   printf("\n %c \n%i \n%f", ch ,ch ,ch);
//   printf("\n %s \n%d \n%f",  s, s, s);
//   printf("\n %c \n%d \n%f", a ,a ,a);
//   printf("\n%d \n%f", b ,b);

//   return 0;
// }

// #include<stdio.h>

// #define pi 3.142

// int main(){
//   float p, r = 2.5;
//   printf("The value of pi is: %f \n", pi);
//   p = 2*r*pi;
//   printf("The circumference of the circle is: %f \n", p);

//   return 0;
// }

// #include<stdio.h>

// int main(){
//   char name[50];
//   // printf("Enter name ");
//   // scanf("%s", &name);
//   // printf("%s\n", name);
  
//   puts("Enter name");
//   gets(name);
//   puts(name);
  
//   return 0;
// }

// #include<stdio.h>

// int main(){
//   int x = 25, y=13;
//   int result;
//   result = ((x = x+1), (y = y+1));
//   printf("%d \n", x);
//   printf("%d \n", y);
//   printf("%d \n", result);
//   return 0;
//   }

// #include<stdio.h>

// int main(){
//   int num;
//   printf("Enter a number:");
//   scanf("%d", &num);
//   if(num%2==0){
//     printf("It is an Even Number"); 
//   }
//   else{
//     printf("It is an Odd Number"); 
//   }
//   return 0;
// }

// #include<stdio.h>

// int main(){
//   int a, b;
//   printf("Enter two numbers: ");
//   scanf("%d, %d", &a, &b);
//   if(a>b){
//     printf("%d is greater than %d", a, b);
//   }
//   else if(b>a){
//     printf("%d is greater than %d", b, a);
//   }
//   else{
//   printf("%d and are equal %d", a, b);
  
//   }
// }

// #include<stdio.h>

// int main(){
//   int age;
//   printf("Enter your age:");
//   scanf("%d", &age);
//   if(age<18){
//     printf("Minor and not eligible");
//   }
//   else{
//     if(age>=18 && age<=60){
//     printf("Eligible");
//     }
//   else{
//     printf("Your are too old to work");
//   }
//   }
  
//   return 0;
// }

// #include<stdio.h>

// int main(){
// printf("Enter your grade: ");
// int grade;
// scanf("%d", &grade);

// if(grade>90 && grade<=100){
//   printf("A grade");
// }
// else if(grade>=70 && grade<=90){
//   printf("B grade");
// }
// else if(grade>=50 && grade<70){
//   printf("C grade");
// }
// else{
// printf("Fail");
// }
//   return 0;
// }

// #include<stdio.h>

// int main(){
//   int a, b;
//   printf("Enter a two numbers:");
//   scanf("%d %d", &a, &b);
//   printf("Enter a operator(+, -, *, /):");
//   char operator;
//   getchar();
//   scanf("%c", &operator);
//   switch(operator){
//     case '+': 
//       printf("The addition is: %d", a+b);
//       break;
//     case '-':
//       printf("The difference is: %d", a-b);
//       break;
//     case '*':
//       printf("The product is: %d", a*b);
//       break;
//     case '/':
//     if(b==0){
//       printf("Enter a valid number");
//     }else{
//       printf("The division is: %f", a/b);
//     }
//       break;
//     default:
//     printf("Invalid input");
//   }
//   return 0;
// }

#include<stdio.h>

int main(){
  printf("Enter a character");
  char a;
  scanf("%c", &a);
  switch(a){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    printf("Vowel");
    break;
    
    default:
    printf("Consonant");
    break;
  }

  }

