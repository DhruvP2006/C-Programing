// Write a program in C to accept dimensions of two matrices and to check if matrix multiplication is possible, if it is possible then multiply two matrices using pointers.
// #include <stdio.h>

// int matriceInput(int mi, int mj, int arr1[][]);
// int matriceMultiply(int arr1, int arr2);

// int main()
// {
//   int mi, mj, ni, nj;
//   printf("Enter the Dimensions of two 2D matrices: ");
//   scanf("%d%d%d%d", &mi, &mj, &ni, % nj);
//   if (mj == ni)
//   {
//   }
//   return 0;
// }

// int matriceInput(int mi, int mj, int arr[][])
// {
//   printf("Enter the Dimensions of a 2D matrices: ");
//   for (int i = 0; i < mi - 1; i++)
//   {
//     for (int j = 0; j < mj - 1; j++)
//     {
//       scanf("%d", &arr[i][j]);
//     }
//   }
// }

// Write a program in C to print all permutations of a given string using pointers.
// #include <stdio.h>
// #include <string.h>

// void swap(char *a, char *b);
// void permute(char *str, int left, int right);

// int main()
// {
//   char input[1000];
//   printf("Enter a String: ");
//   gets(input);
//   permute(input, 0, strlen(input) - 1);
// }

// void swap(char *a, char *b)
// {
//   char temp = *a;
//   *a = *b;
//   *b = temp;
// }

// void permute(char *str, int left, int right)
// {
//   if (left == right)
//   {
//     printf("%s\n", str);
//     return;
//   }

//   for (int i = left; i <= right; i++)
//   {
//     swap((str + left), (str + i));
//     permute(str, left + 1, right);
//     swap((str + left), (str + i));
//   }
// }

// A 5-digit positive integer is entered through the keyboard, write a function to calculate sum of digits of the 5 - digit number : (1)Without using recursion - call by reference(2) Using recursion
// #include <stdio.h>

// int sumDigits(int *a);
// int sumDigitsRecursive(int *a, int *sum);

// int main()
// {
//   int input;
//   printf("Enter a 5 Digit Number: ");
//   scanf("%d", &input);
//   int result = sumDigits(&input);
//   printf("%d\n", result);
//   int sum_recursive = 0;
//   int result2 = sumDigitsRecursive(&input, &sum_recursive);
//   printf("%d\n", result2);
//   return 0;
// }

// int sumDigits(int *a)
// {
//   int sum = 0;
//   for (int i = 0; i < 5; i++)
//   {
//     sum += *a % 10;
//     *a /= 10;
//   }
//   return sum;
// }

// int sumDigitsRecursive(int *a, int *sum)
// {
//   if (*a == 0)
//   {
//     return;
//   }
//   *sum += *a % 10;
//   *a / 10;
//   sumDigitsRecursive(a, sum);
// }

// Create a program to reverse a string using pointers.
// #include <stdio.h>

// void reverseString(char *str);

// int main()
// {
//   char input[1000];
//   printf("Enter a String: ");
//   gets(input);
//   reverseString(&input);
//   printf("%s", input);
//   return 0;
// }

// void reverseString(char *str)
// {
//   char *start = str;
//   char *end = str;
//   char temp;
//   while (*end != '\0')
//   {
//     end++;
//   }
//   end--;
//   while (start < end)
//   {
//     temp = *start;
//     *start = *end;
//     *end = temp;

//     start++;
//     end--;
//   }
// }

// Write a C program to copy one string to another using pointers.
// #include <stdio.h>

// void strcpy(char *orgStr, char *cpyStr);

// int main()
// {

//   return 0;
// }

// void strcpy(char *orgStr, char *cpyStr)
// {
//   while (*orgStr != '\0')
//   {
//     *cpyStr = *orgStr;
//     orgStr++;
//     cpyStr++;
//   }
//   *cpyStr = '\0';
// }