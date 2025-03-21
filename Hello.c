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

// #include<stdio.h>

// int main(){
//   printf("Enter a character");
//   char a;
//   scanf("%c", &a);
//   switch(a){
//     case 'a':
//     case 'e':
//     case 'i':
//     case 'o':
//     case 'u':
//     printf("Vowel");
//     break;

//     default:
//     printf("Consonant");
//     break;
//   }

//   }

// #include<stdio.h>

// int main(){
//   int i, j=1;
//   printf("Enter a Number: ");
//   scanf("%d", &i);
//   while(j<=i){
//     printf("%d \n", j);
//     j++;
//   }

// return 0;
// }

// #include <stdio.h>

// int main()
// {
//   int i, j, answer;
//   printf("Enter starting Number: ");
//   scanf("%d", &i);
//   printf("Enter ending Number: ");
//   scanf("%d", &j);
//   while (i <= j)
//   {
//     answer += i;
//     i++;
//   }
//   printf("The sum of n numbers is: %d", answer);

//   return 0;
// }

// #include<stdio.h>

// int main(){
//   int end;
//   printf("Enter a Number: ");
//   scanf("%d", &end);
//   int i = 1, j = 1;
// while(end-1>=0){
//   printf("%d \t %d \t", i, j);
//   i = i+j;
//   j = i+j;
//   end--;
// }
// }

// #include<stdio.h>

// int main(){
//   int a, fact = 1;
//   printf("Enter a Number: ");
//   scanf("%d", &a);
//   while(a>1){
//     fact *= a;
//     a--;
//   }

//   printf("%d \n", fact);
//   do{
//     fact *= a;
//     a--;
//   }
//   while(a>1);
//   printf("%d \n", fact);
//   return 0;
// }

// #include<stdio.h>

// int main(){
//   int a, i=0;
//   printf("Enter a number: ");
//   scanf("%d", &a);
//   do{
//     i%2? printf("%d \t", i) : printf(" \n");
//     i%2? printf(" \n") : printf("%d \t", i);
//     i++;
//   }
//   while(i<=a);
//   return 0;
// }

// #include<stdio.h>

// int main(){
//   int a;
//   printf("Enter a number: ");
//   scanf("%d", &a);
//   for(int i =0; i<=a; i++){
//     printf("%d \t", i);
//   }
//   for(int i =a; i>0; i--){
//     printf("%d \t", i);
//   }
//   return 0;
// }

// #include<stdio.h>

// int main(){
//   int a, fact = 1;
//   printf("Enter a Number: ");
//   scanf("%d", &a);
//   for(int i = 1; i<=a; i++){
//   fact *= i;
//   }
//   printf("%d", fact);
// }

// #include<stdio.h>

// int main(){
//   int n, fact, powX, x;
//   float sum = 0.0;
//   printf("\nEnter a value of n: ");
//   scanf("%d", &n);
//   printf("\nEnter a value of x: ");
//   scanf("%d", &x);
//   printf("e^%d = ", x);
//   for(int i =0; i<=n; i++){
//   fact = 1;
//   for(int j = i; j>0; j--){
//   if(j ==0){
//     fact = 1;
//     break;
//   }
//   fact *= j;
//   }
//   powX =1;
//   for(int k =i; k>=1; k--){
//     if(k==0){
//       break;
//          }
//     powX *= x;
//   }

//   printf("%d/%d", powX, fact);
//   if(i!=n){
//       printf(" + ");
//   }
//   sum += ((float)powX/fact);
//     }
//     printf("\ne^%d = %f", x, sum);
//   return 0;
// }

// #include<stdio.h>

// int main(){
//   int arr1[5] = {1, 2, 3, 4 ,5};
//   float arr2[5]  = {1.19, 2.54, 3.29, 4.87 ,5.34};
//   char arr3[5] = {'K', 'J', 'S', 'C', 'E'};
//   for(int i = 0; i<5; i++){
//     printf("%d \t", arr1[i]);
//   }
//     printf("\n");
//   for(int i = 0; i<5; i++){
//     printf("%f \t", arr2[i]);
//   }
//     printf("\n");
//     for(int i = 0; i<5; i++){
//     printf("%c \t", arr3[i]);
//   }
//   return 0;
// }

// #include<stdio.h>

// int main(){
//   int arr[3];
//   printf("Enter 3 Numbers: ");
//   for(int i = 0; i<3; i++){
//     scanf("%d", &arr[i]);
//   }
//   for(int i = 0; i<3; i++){
//     printf("%d \t", arr[i]);
//   }

//   return 0;
// }

// #include<stdio.h>

// int main(){
//   int arr[3][3];
// printf("Enter 9 Numbers: ");
//   for(int i = 0; i<3; i++){
//     for(int j = 0; j<3; j++){
//       scanf("%d", &arr[i][j]);
//     }
//   }

//   int i, j;
//   printf("Enter two Numbers less than 3: ");
//   scanf("%d", &i);
//   scanf("%d", &j);
//   printf("%d\n", arr[i][j]);

//   for(int i = 0; i<3; i++){
//     for(int j = 0; j<3; j++){
//       printf("%d \t", arr[i][j]);
//     }
//     printf("\n");
//   }
//   return 0;
// }

// #include<stdio.h>

// int main(){
//   int sizei, sizej;
// printf("Enter the size of the array you want to create: ");
//       scanf("%d %d", &sizei, &sizej);
//   int arr[sizei][sizej], sum;
// printf("Enter the Numbers for the array: ");
//   for(int i = 0; i<sizei; i++){
//     for(int j = 0; j<sizej; j++){
//       scanf("%d", &arr[i][j]);
//     }
//   }

// printf("The array you entered is: \n");
// for(int i = 0; i<sizei; i++){
//     for(int j = 0; j<sizej; j++){
//       printf("%d \t", arr[i][j]);
//     }
//     printf("\n");
//   }

//  for(int i = 0; i<sizei; i++){
//     for(int j = 0; j<sizej; j++){
//       sum += arr[i][j];
//     }
// }
// printf("The sum of all the numbers of the array is: %d", sum);
//   return 0;
// }

// #include<stdio.h>

// int main(){
//   int arr1[2][2]={{1,2},{3,4}};
//   int arr2[2][2]={{1,2},{3,4}};
//   int arrSum[2][2];
//   for(int i = 0; i<2; i++){
//     for(int j = 0; j<2; j++){
//       arrSum[i][j] = arr1[i][j] + arr2[i][j];
//         }}

//   printf("The First array is: \n");
// for(int i = 0; i<2; i++){
//     for(int j = 0; j<2; j++){
//       printf("%d \t", arr1[i][j]);
//     }
//     printf("\n");
//   }
//   printf("The Second array is: \n");
// for(int i = 0; i<2; i++){
//     for(int j = 0; j<2; j++){
//       printf("%d \t", arr2[i][j]);
//     }
//     printf("\n");
//   }
//   printf("The sum of the two arrays is: \n");
// for(int i = 0; i<2; i++){
//     for(int j = 0; j<2; j++){
//       printf("%d \t", arrSum[i][j]);
//     }
//     printf("\n");
//   }
//   return 0;

// }

// #include<stdio.h>
// #include<string.h>

// int main(){
//   char str[100], strCpy[100], strRev[100];
//   printf("Enter a string: ");
//   gets(str);
//   int i;
//   for(i = 0; str[i]!='\0'; i++){
//     strCpy[i] = str[i];
//   }
//   strCpy[i] = '\0';
//   printf("The copied string is: %s", strCpy);

//    for(i = 0; str[i]!='\0'; i++){
//     strRev[i] = str[strlen(str)-i-1];
//   }
//   printf("\nThe reversed string is: %s", strRev);
//   return 0;
// }

// #include<stdio.h>
// #include<string.h>

// int main(){
// char str1[100], str2[100], strCpy[100];
// int option;
//   printf("Enter the First String: ");
//   gets(str1);
//   printf("Enter the Second String: ");
//   gets(str2);
// int exit = 1;
// while(exit){
// printf("Press 1, to compare the lengths of the two strings\nPress 2, to copy string 1 into another variable\nPress 3, to concatenate string 1 and string 2\nPress 4, To compare the two strings for equaltiy\nPress 5, for reversing String 2\nPress 6, to exit\n");
// scanf("%d", &option);
// switch (option)
// {
// case 1:
//    if(strlen(str1)>strlen(str2)){
//     printf("Length of String 1 is greater than string 2\n");
//   } else if(strlen(str1)<strlen(str2)){
//     printf("Length of String 2 is greater than string 1\n");
//   } else{
//     printf("Both Strings are of the same Length\n");
//   }
//   break;
// case 2:
//   strcpy(strCpy, str1);
//   printf("String 1 copied into another variable: %s\n", strCpy);
//   break;
// case 3:
//   strcat(str1, str2);
//   printf("String 1 and String 2 are concatenated: %s\n", str1);
//   break;
// case 4:
//   if(strcmp(str1, str2)==0){
//     printf("%s and %s are equal\n", str1, str2);
//   } else{
//     printf("%s and %s are not equal\n", str1, str2);
//   }
//   break;
// case 5:
//   strrev(str2);
//   printf("String 2 reversed: %s", str2);
//   break;
// case 6:
//   exit = 0;
//   break;
// default:
//   printf("Enter a Valid Input!");
//   break;
//   }  }
// }

// #include <stdio.h>

// int factorial(int n);

// int main() {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     printf("Factorial of %d is %d\n", num, factorial(num));
//     return 0;
// }

// int factorial(int n) {
//     if (n == 0)
//         return 1;
//     return n * factorial(n - 1);
// }

#include <stdio.h>

int main()
{

    int *pc, c;
    c = 22;

    printf("Address of c: %p\n", &c);
    printf("Address of pc: %p\n", &pc);
    printf("Value of c: %d\n\n", c);
    pc = &c;

    printf("Address of pointer pc: %p\n", pc);
    printf("Content of pointer pc: %d\n\n", *pc);
    c = 11;

    printf("Address of pointer pc: %p\n", pc);
    printf("Content of pointer pc: %d\n\n", *pc);

    *pc = 2;
    printf("Address of c: %p\n", &c);
    printf("Value of c: %d\n\n", c);

    return 0;
}