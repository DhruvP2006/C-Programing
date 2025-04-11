// Write a program in C to accept n elements from the user, sort those elements and find its median and display it.
// #include <stdio.h>

// int main()
// {
//   int num;
//   float median;
//   printf("Enter the Number of Elemnets you want to Enter: ");
//   scanf("%d", &num);
//   int arr[num];
//   int count = num;
//   while (count)
//   {
//     scanf("%d", &arr[num - count]);
//     count--;
//   }
//   for (int i = 0; i < num - 1; i++)
//   {
//     for (int j = 0; j < num - i - 1; j++)
//     {
//       if (arr[j] > arr[j + 1])
//       {
//         int temp = arr[j];
//         arr[j] = arr[j + 1];
//         arr[j + 1] = temp;
//       }
//     }
//   }
//   if (num % 2 == 0)
//   {
//     median = (arr[(num / 2) - 1] + arr[num / 2]) / 2.0;
//   }
//   else
//   {
//     median = arr[num / 2];
//   }

//   printf("The Median of the Enterd Numbers is %f", median);

//   return 0;
// }

// Write a program to sort a set of names stored in an array in alphabetical order.
// #include <stdio.h>

// int main()
// {
//   int num;
//   printf("Enter the Number of Elemnets you want to Enter: ");
//   scanf("%d", &num);
//   char arr[num];
//   int count = num;
//   while (count)
//   {
//     scanf("%s", arr[num - count]);
//     count--;
//   }

// Write a program that generates a square matrix of size n x n(1 ≤ n ≤ 20), where each element is an integer.Use nested loops and the following rules to fill the matrix : The diagonal elements(from top - left to bottom - right) should be filled with the square of their 1 - based index(e.g., 1, 4, 9, ...).For elements above the diagonal, assign the value as(i + j), where i and j are the 0 - based row and column indices.For elements below the diagonal, assign the value as(i *j).If any value is divisible by 7, skip assigning it and replace it with - 1. Finally, display the matrix with proper formatting, and count how many - 1 values are present in the matrix.

// #include <stdio.h>

// int main()
// {
//   int size, i, j;
//   printf("Enter the Size of the Square Matrice: ");
//   scanf("%d", &size);
//   size++;
//   i = j = size;
//   int arr[size][size];
//   for (int i = 0; i < size - 1; i++)
//   {
//     for (int j = 0; j < size - 1; j++)
//     {
//       if (i >= j)
//       {
//         arr[i][j] = (i + 1) * (j + 1);
//       }
//       else
//       {
//         arr[i][j] = (i + 1) + (j + 1);
//       }
//       if (arr[i][j] % 7 == 0)
//       {
//         arr[i][j] = -1;
//       }
//     }
//   }
//   for (int i = 0; i < size - 1; i++)
//   {
//     for (int j = 0; j < size - 1; j++)
//     {
//       printf("%d\t", arr[i][j]);
//     }
//     printf("\n");
//   }
// }

// write C program using array. the X and Y coordinates of 10 different points are entered through the keyboard.Write a program to find the distance of last point from the first point(sum of distance between consecutive points).
// #include <stdio.h>
// #include <math.h>

// float distance(int x1, int y1, int x2, int y2);

// int main()
// {
//   int arrX[10];
//   int arrY[10];
//   printf("Enter Co-ordinates of 10 Points:\n");
//   for (int i = 0; i < 10; i++)
//   {
//     printf("Enter X Co-ordinate: ");
//     scanf("%d", &arrX[i]);
//     printf("Enter Y Co-ordinate: ");
//     scanf("%d", &arrY[i]);
//   }

//   for (int i = 0; i < 9; i++)
//   {
//     printf("Distance between points %d and %d is %f\n", i + 1, i + 2, distance(arrX[i], arrY[i], arrX[i + 1], arrY[i + 1]));
//   }
//   return 0;
// }

// float distance(int x1, int y1, int x2, int y2)
// {
//   return sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
// }

// Write a program in C to count a total number of duplicate elements in an array.

// #include <stdio.h>

// void sort(int arr[], int size);
// int duplicate(int arr[], int size);

// int main()
// {
//   int size;
//   printf("enter the Number of elements you want to enter: ");
//   scanf("%d", &size);
//   int arr[size];
//   printf("Enter n Elements: \n");
//   int i = 0;
//   while (i < size)
//   {
//     scanf("%d", &arr[i]);
//     i++;
//   }
//   sort(arr, size);
//   printf("%d", duplicate(arr, size));
//   return 0;
// }

// void sort(int arr[], int size)
// {
//   for (int i = 0; i < size - 1; i++)
//   {
//     for (int j = 0; j < size - i - 1; j++)
//     {
//       if (arr[j] > arr[j + 1])
//       {
//         int temp = arr[j];
//         arr[j] = arr[j + 1];
//         arr[j + 1] = temp;
//       }
//     }
//   }
// }
// int duplicate(int arr[], int size)
// {
//   int duplicate = 0;
//   for (int i = 0; i < size - 1; i++)
//   {
//     if (arr[i] == arr[i + 1])
//     {
//       duplicate++;
//     }
//   }
//   return duplicate;
// }
// Thirty numbers are entered from the keyboard into an array. Write a program to find out how many of them are positive, how many are negative, how many are even and how many odd.

// #include <stdio.h>

// int main()
// {
//   int counter = 10, input, positive = 0, negative = 0, even = 0, odd = 0;
//   printf("Enter 10 Numbers: ");
//   while (counter)
//   {
//     scanf("%d", &input);
//     if (input < 0)
//     {
//       negative++;
//     }
//     else
//     {
//       positive++;
//     }
//     if (input % 2 == 0)
//     {
//       even++;
//     }
//     else
//     {
//       odd++;
//     }

//     counter--;
//   }
//   printf("Number of Positive Numbers is %d\n Number of Negative Numbers is %d\n Number of Even Numbers is %d\n Number of odd Numbers is %d", positive, negative, even, odd);
//   return 0;
// }

// Write a C program to compare two strings without using any string function.
// #include <stdio.h>

// int comparestr(char *str1, char *str2);

// int main()
// {
//   char str1[100], str2[100];

//   printf("Enter the first string: ");
//   scanf("%s", str1);
//   printf("Enter the second string: ");
//   scanf("%s", str2);
//   int result = comparestr(str1, str2);

//   if (result == 0)
//     printf("The strings are equal.\n");
//   else if (result < 0)
//     printf("The first string is smaller than the second string.\n");
//   else
//     printf("The first string is greater than the second string.\n");

//   return 0;
//   return 0;
// }

// int comparestr(char *str1, char *str2)
// {
//   while (*str1 && *str2)
//   {
//     if (*str1 != *str2)
//     {
//       return *str1 - *str2;
//     }
//     str1++;
//     str2++;
//   }

//   return *str1 - *str2;
// }

// Write a program to concatenate two strings using arrays.
// #include <stdio.h>

// int concatStr(char str1[], char str2[], char result[]);

// int main()
// {
//   char str1[100], str2[100], result[200];

//   printf("Enter the first string: ");
//   scanf("%s", str1);
//   printf("Enter the second string: ");
//   scanf("%s", str2);
//   concatStr(str1, str2, result);

//   printf("Concatenated String: %s\n", result);
//   return 0;
// }

// int concatStr(char str1[], char str2[], char result[])
// {
//   int i = 0, j = 0;
//   while (str1[i] != '\0')
//   {
//     result[i] = str1[i];
//     i++;
//   }
//   while (str2[j] != '\0')
//   {
//     result[i] = str2[j];
//     i++;
//     j++;
//   }
//   result[i] = '\0';
// }
