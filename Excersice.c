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

// grading of marks
//  #include<stdio.h>

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

// check upper or lower case
//  #include<stdio.h>

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

// factorial
//  #include<stdio.h>

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

// functions
//  #include<stdio.h>

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

// sum function
//  #include<stdio.h>

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

// tbale using function
//  #include<stdio.h>

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
// * - Value at address
// & - address of
// to print address stored in a pointer variable use %p for hexadeciaml, %u - unsigned int
// #include<stdio.h>

// int main(){
//   int i = 5;
//   int *ptr = &i;
//   int **pptr = &ptr;
//   printf("%d \n", **pptr);
// }

// #include<stdio.h>

// void square (int n);
// void _square(int *n);

// int main(){
// int number = 4;
// int *num = &number;
// square(number);
// _square(num);
// printf("number = %d \n", number);
// return 0;
// }
// // call by value
// void square(int n){
//   n = n* n;
//   printf("square = %d\n", n);
// }

// void _square(int *n){
//   *n = (*n) * (*n);
//   printf("square = %d \n", *n);
// }

// Number Swaping
// #include<stdio.h>

// void swap(int *a, int *b);

// int main(){
//   int x = 23;
//   int y = 45;
//   printf("First Number: %d \n", x);
//   printf("Second Number: %d \n", y);
//   swap(&x, &y);
//   return 0;
// }

// void swap(int *a, int *b){
//   int c = *a;
//   *a = *b;
//   *b = c;
//     printf("First Number: %d \n", *a);
//   printf("Second Number: %d \n", *b);
// }

// Printing Address
// #include<stdio.h>

// void printadd(int *n);

// int main(){
//   int a = 45;
//   printadd(&a);
//   printf("address of a in %u \n", &a);
//   return 0;
// }

// void printadd(int *n){
//   printf("address of a in %u \n", n);
// }

// function to print sum, product, average, and average of the 3 functions
// #include<stdio.h>

// void maths(int a, int b, int *sum, int *product, int *average);

// int main(){
//   int x =23, y = 33;
//   int sum, product, average;
//   maths(x, y, &sum, &product, &average);

//   printf("sum = %d", "product = %d", "average = %d", sum, product, average);
//   return 0;
// }

// void maths(int *a, int *b, int *sum, int *product, int *average){
//   *sum = a+b;
//   *product = a*b;
//   *average = (a+b)/2;
// }

// Arrays --------------------------------------------------------------------------------------
// Array is a collection of pointers

// #include<stdio.h>

// int main(){
//   float price[3];
//   printf("Enter Price of First Item: ");
//   scanf("%f", &price[0]);
//   printf("Enter Price of Second Item: ");
//   scanf("%f", &price[1]);
//   printf("Enter Price of Third Item: ");
//   scanf("%f", &price[2]);
//   float sum = (price[0] + price[1] + price[2]) + (0.18*(price[0] + price[1] + price[2]));
//   printf("The Final Price of the Items is %f", sum);

//   return 0;
// }

// #include<stdio.h>

// int main(){
//   int age = 22;
//   int *ptr = &age;
// printf("ptr = %u", ptr);
//   ptr++;
//   printf("ptr = %d", &ptr);
//     ptr--;
// printf("ptr = %u", ptr);
// }

// #include<stdio.h>

// int main(){
//   int age = 23;
//   int _age = 23;
//   int *ptr = &age;
//   char *_ptr  = &_age;
//   printf("%u, %u, Difference= %u \n", ptr, _ptr, ptr-_ptr);
//   _ptr = &age;
//   printf("comparision = %u", ptr== _ptr);
//   return 0;
// }

// Count odd numbers
// #include<stdio.h>

// int countOod(int arr[], int n);

// int main(){
//   int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//   printf("%d", countOod(num, 9));
//   return 0;
// }

// int countOod(int arr[], int n){
//   int counter = 0;
//   for(int i = 0; i<n; i++){
//     if(arr[i]%2 != 0){
//         counter++;
//       }
//     }

//   return counter;
// }

// reverse array
// #include<stdio.h>

// int arrReverse(int arr[], int n);

// int main(){
//   int list[6] = {1,2,3,4,5,6};
//  arrReverse(list, 5);
//   return 0;
// }

// int arrReverse(int arr[], int n){
//   int arrR[n];
//   for(int i = 0; i<=n; i++){
//     arrR[n-i] = arr[i];
//   }
//   for(int i = 0; i<=n; i++){
//   printf("%d \t", arrR[i]);
// }}

// Store First n Fibonacci numbers
// #include<stdio.h>

// int fibarr(int n);

// int main(){
//   int n;
//   scanf("%d", &n);
//   fibarr(n);
//   return 0;
// }

// int fibarr(int n){
//   int arr[n];
//   arr[0] = 0;
//   arr[1] = 1;
//   for(int i = 2; i<n; i++){
//     arr[i] = arr[i-1]+arr[i-2];
//   }

//   for(int i = 0; i<n; i++){
//     printf("%d \t", arr[i]);
//   }
// }

// Frequesncy of given number
// #include<stdio.h>

// int freq(int arr[], int key, int len);

// int main(){
//   int array1[13] = {1,1,1,2,2,3,4,5,5,5,5,6,6};
//   int n;
//   scanf("%d", &n);
//   int count = freq(array1, n, 13);
//   printf("%d", count);
//   return 0;
// }

// int freq(int arr[], int key, int len){
//   int counter = 0;
//   for(int i = 0; i<len; i++){
//     if(arr[i] == key){
//       counter++;
//     }
//   }
//   return counter;
// }

// Largest number in an array
// #include<stdio.h>

// int largeNum(int arr[], int n);

// int main(){
//   int array1[10] = {1,2,3,4,5,6,7,8,9,10};
//   int result =  largeNum(array1, 10);
//   printf("%d", result);
//   return 0;
// }

// int largeNum(int arr[], int n){
//   int big = 0;
//   for(int i = 0; i<n; i++){
//     if(arr[i]>big){
//       big = arr[i];
//     }
//   }
//   return big;
// }

// Insert element at the end of array
// #include<stdio.h>

// int insert(int arr[], int num, int len);

// int main(){
//   int array1[10] = {1,2,3,4,5};
//   int a;
//   scanf("%d", &a);
//   int result = insert(array1, a, 5);
//   for(int i = 0; i<6; i++){
//   printf("%d \t", array1[i]);
//   }
//   return 0;
// }

// int insert(int arr[], int num, int len){
//   arr[len] = num;
// }

// Strings ---------------------------------------------------------------------------------------------------------------
// A character array terminated by \0 (null character)
// #include<stdio.h>

// int main(){
//   char name[] = {'D', 'h', 'r', 'u', 'v', '\0'}
//   char name[] = "Dhruv";
//   return 0;
// }

// #include<stdio.h>

// void printString(char arr[]);

// int main(){
//   char firstName[] = "Dhruv";
//   char lastName[] = "Pankhania";
//   printString(firstName);
//   printString(lastName);
// }

// void printString(char arr[]){
//   for(int i = 0; arr[i]!= '\0' ;i++ ){
//       printf("%c", arr[i]);
//   }
//   printf("\n");
// }

// #include<stdio.h>

// int main(){
//   char firstName[50];
//   char fullName[50];
//   printf("Enter your full name: ");
//   fgets(fullName, 50, stdin);
//   printf("Your Full name is: " );
//   puts(fullName);

//   printf("Enter your first name: ");
//   scanf("%s", firstName);
//   printf("Your first name is: %s", firstName);

//   return 0;
// }

// #include<stdio.h>

// int countLength(char arr[]);

// int main(){
//   char name[100];
//   printf("Enter your Name: ");
//   fgets(name, 100, stdin);
//   printf("%d", countLength(name));
// }

// int countLength(char arr[]){
//     int counter = 0;
//   for(int i = 0; arr[i] != '\0'; i++){
//     counter++;
//   }
//   return counter-1;
// }

// #include <stdio.h>
// int main()
// {
//   int *pc, c;
//   c = 5;
//   pc = &c;
//   c = 1;
//   printf("%d\n", c);
//   printf("%d\n", *pc);
//   return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//   int num;
//   FILE *fptr;

//   // use appropriate location if you are using MacOS or Linux
//   fptr = fopen("C:\\program.txt", "w");

//   if (fptr == NULL)
//   {
//     printf("Error!");
//     exit(1);
//   }

//   printf("Enter num: ");
//   scanf("%d", &num);

//   fprintf(fptr, "%d", num);
//   fclose(fptr);

//   return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//   int num;
//   FILE *fptr;

//   if ((fptr = fopen("program.txt", "r")) == NULL)
//   {
//     printf("Error! opening file");

//     exit(1);
//   }

//   fscanf(fptr, "%d", &num);

//   printf("Value of n=%d", num);
//   fclose(fptr);

//   return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// struct threeNum
// {
//   int n1, n2, n3;
// };

// int main()
// {
//   int n;
//   struct threeNum num;
//   FILE *fptr;

//   if ((fptr = fopen("program.bin", "wb")) == NULL)
//   {
//     printf("Error! opening file");

//     // Program exits if the file pointer returns NULL.
//     exit(1);
//   }

//   for (n = 1; n < 5; ++n)
//   {
//     num.n1 = n;
//     num.n2 = 5 * n;
//     num.n3 = 5 * n + 1;
//     fwrite(&num, sizeof(struct threeNum), 1, fptr);
//   }
//   fclose(fptr);

//   return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// struct threeNum
// {
//   int n1, n2, n3;
// };

// int main()
// {
//   int n;
//   struct threeNum num;
//   FILE *fptr;

//   if ((fptr = fopen("program.bin", "rb")) == NULL)
//   {
//     printf("Error! opening file");

//     // Program exits if the file pointer returns NULL.
//     exit(1);
//   }

//   for (n = 1; n < 5; ++n)
//   {
//     fread(&num, sizeof(struct threeNum), 1, fptr);
//     printf("n1: %d\tn2: %d\tn3: %d\n", num.n1, num.n2, num.n3);
//   }
//   fclose(fptr);

//   return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main()
// {
//   int *numbers;
//   int i, sum = 0;
//   int n;
//   printf("Enter the number of elements: ");
//   scanf("%d", &n);
//   numbers = (int *)malloc(n * sizeof(int));
//   if (numbers == NULL)
//   {
//     printf("Memory allocation failed\n");
//     return 1;
//   }
//   for (i = 0; i < n; i++)
//   {
//     printf("Enter number %d: ", i + 1);
//     scanf("%d", &numbers[i]);
//     sum += numbers[i];
//   }
//   printf("Sum of the elements: %d\n", sum);
//   free(numbers);
//   return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//   int *numbers;
//   int original_size = 5;
//   int new_size = 8;
//   numbers = (int *)malloc(original_size * sizeof(int));
//   if (numbers == NULL)
//   {
//     printf("Memory allocation failed.\n");
//     return 1;
//   }
//   for (int i = 0; i < original_size; i++)
//   {
//     numbers[i] = i + 1;
//   }
//   printf("Entered Array: ");
//   for (int i = 0; i < original_size; i++)
//   {
//     printf("%d ", numbers[i]);
//   }
//   printf("\n");
//   printf("Reallocating memory\n");
//   numbers = (int *)realloc(numbers, new_size * sizeof(int));
//   if (numbers == NULL)
//   {
//     printf("Memory reallocation failed.\n");
//     return 1;
//   }
//   for (int i = original_size; i < new_size; i++)
//   {
//     numbers[i] = i + 1;
//   }
//   printf("New array: ");
//   for (int i = 0; i < new_size; i++)
//   {
//     printf("%d ", numbers[i]);
//   }
//   printf("\n");
//   free(numbers);
//   return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int stack[100], choice, n, top, x, i;

void push();
int pop();
int peek();
int display();

int main()
{
  top = -1;
  printf("Number of Elements: ");
  scanf("%d", &n);
  int flag = 1;
  while (flag)
  {
    int choice;
    printf("Enter 1 to Push\nEnter 2 to Pop\nEnter 3 to Peek\nEnter 4 to Display\nEnter 5 to Exit\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
      printf("Enter the element to be pushed: ");
      scanf("%d", &x);
      push(x);
      break;
    case 2:
      x = pop();
      printf("Popped element is %d\n", x);
      pop();
      break;
    case 3:
      peek();
      break;
    case 4:
      display();
      break;
    case 5:
      flag = 0;
      break;
    default:
      printf("Enter a Valid Choice");
      break;
    }
  }
}

void push()
{
  if (top >= n - 1)
  {
    printf("Stack overflow\n");
  }
  else
  {
    top++;
    stack[top] = x;
  }
}

int pop()
{
  if (top < 0)
  {
    printf("Stack underflow\n");
  }
  else
  {
    x = stack[top];
    top--;
  }
  return x;
}

int display()
{
  if (top < 0)
    printf("Stack is empty\n");
  else
  {
    printf("Stack elements are: \n");
    for (i = top; i >= 0; i--)
      printf("%d\n", stack[i]);
  }

  return 0;
}

int peek()
{

  if (top < 0)
    printf("Stack is empty\n");
  else
  {
    printf("Top element of the Stack is: \n");
    printf("%d\n", stack[top]);
  }

  return 0;
}