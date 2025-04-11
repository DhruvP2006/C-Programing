// Write a program in C to calculate fibonacci series of n numbers. Take number n from the user.
// #include <stdio.h>

// int fib(int n);

// int main()
// {
//   int num;
//   printf("Enter the Number of Numbers of Fibonacci Series you want to Print: ");
//   scanf("%d", &num);
//   fib(num);
//   printf("Fibonacci Series: ");
//   for (int i = 0; i < num; i++)
//   {
//     printf("%d \t", fib(i));
//   }
//   printf("\n");
//   return 0;
// }

// int fib(int n)
// {
//   if (n == 0)
//   {
//     return 0;
//   }
//   else if (n == 1)
//   {
//     return 1;
//   }
//   else
//   {
//     return fib(n - 1) + fib(n - 2);
//   }
// }

// Write a program to print all prime numbers
// #include <stdio.h>

// int main()
// {
//   int n;
//   printf("Enter a Number: ");
//   scanf("%d", &n);
//   for (int i = 2; i <= n; i++)
//   {
//     int flag = 1;
//     for (int j = 2; j * j <= i; j++)
//     {
//       if (i % j == 0)
//       {
//         flag = 0;
//         break;
//       }
//     }
//     if (flag)
//     {
//       printf("%d\t", i);
//     }
//   }
// }

// Write a C program that takes a number N and prints a pyramid pattern of numbers
// #include <stdio.h>

// int main()
// {
//   int n;
//   printf("Enter a Number: ");
//   scanf("%d", &n);
//   for (int i = 1; i <= n; i++)
//   {
//     for (int j = 1; j <= i; j++)
//     {
//       printf("%d", j);
//     }
//     printf("\n");
//   }
// }
