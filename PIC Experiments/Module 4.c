// Write a program to store and display information about 5 cars(name, year of launch and price) using an array of structures.
// #include <stdio.h>

// struct carsDetails
// {
//   char name[1000];
//   int yearOfLaunch;
//   float price;
// };

// struct carsDetails car[5];
// int carCount = 0;

// void dataInput();
// void dataDisplay();

// int main()
// {
//   int flag = 1;
//   while (flag)
//   {

//     int choice;
//     printf("Choose one of the follwoing:\nEnter 1 to Input Car Data\nEnter 2 to Display Car Data\nEnter 3 to exit\n");
//     scanf("%d", &choice);
//     switch (choice)
//     {
//     case 1:
//       dataInput();
//       break;
//     case 2:
//       dataDisplay();
//       break;
//     case 3:
//       flag = 0;
//       break;
//     default:
//       printf("Enter a valid Choice");
//       break;
//     }
//   }
//   return 0;
// }

// void dataInput()
// {
//   for (int i = 0; i < 5; i++)
//   {
//     int flag = 1;
//     printf("Enter the Name of the Car: ");
//     scanf(" %[^\n]", &car[i].name);
//     printf("Enter the Year of Launch: ");
//     scanf("%d", &car[i].yearOfLaunch);
//     printf("Enter the Price of the Car: ");
//     scanf("%f", &car[i].price);
//     carCount++;
//     printf("Enter 1 to Input more Data\nEnter 0 to Exit\n");
//     scanf("%d", &flag);
//     if (!flag)
//     {
//       break;
//     }
//   }
// }

// void dataDisplay()
// {
//   for (int i = 0; i < carCount; i++)
//   {
//     printf("Name: %s\n", car[i].name);
//     printf("Year of Launch: %d\n", car[i].yearOfLaunch);
//     printf("Price: %f\n", car[i].price);
//   }
// }

// Write a recursive function that checks if a string is a palindrome. The function should: Accept the string as input.Compare the first and last characters of the string, then recursively check the substring without the first and last characters.Return true if the string is a palindrome, and false otherwise.Test the function with multiple strings(both palindromes and non - palindromes).

// #include <stdio.h>
// #include <string.h>

// int isPalindrome(char str[], int start, int end);

// int main()
// {
//   char input[1000];
//   printf("Enter a String to Check for Palindrome: ");
//   scanf(" %[^\n]", input);

//   int length = strlen(input);
//   if (isPalindrome(input, 0, length - 1))
//   {
//     printf("The string is a palindrome.\n");
//   }
//   else
//   {
//     printf("The string is not a palindrome.\n");
//   }
//   return 0;
// }

// int isPalindrome(char str[], int start, int end)
// {
//   if (start >= end)
//   {
//     return 1;
//   }

//   if (str[start] != str[end])
//   {
//     return 0;
//   }
//   return isPalindrome(str, start + 1, end - 1);
// }

// Write a function to compute the distance between two points and use it to develop another function that will compute the area of the triangle whose vertices are A(x1, y1), B(x2, y2), and C(x3, y3).Use these functions to develop a function which returns a value 1 if the point(x, y) lines inside the triangle ABC, otherwise a value 0.

// #include <stdio.h>
// #include <math.h>

// float distance(int x1, int y1, int x2, int y2);
// float area(int x1, int y1, int x2, int y2, int x3, int y3);
// int checkPoint(int m, int n, int x1, int y1, int x2, int y2, int x3, int y3);

// int main()
// {
//   int x1, x2, x3, y1, y2, y3, m, n;
//   printf("Enter the 3 Co-ordinates: ");
//   scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);
//   printf("Enter another co-ordinate: ");
//   scanf("%d%d", &m, &n);
//   int result = checkPoint(m, n, x1, y1, x2, y2, x3, y3);
//   printf("%d", result);
//   return 0;
// }

// float distance(int x1, int y1, int x2, int y2)
// {
//   return sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
// }

// float area(int x1, int y1, int x2, int y2, int x3, int y3)
// {
//   float sideA, sideB, sideC, s, result;
//   sideA = distance(x1, y1, x2, y2);
//   sideB = distance(x2, y2, x3, y3);
//   sideC = distance(x3, y3, x1, y1);
//   if (sideA == 0 || sideB == 0 || sideC == 0)
//   {
//     return 0;
//   }
//   else
//   {
//     s = ((sideA + sideB + sideC) / 2);
//     result = sqrt(s * (s - sideA) * (s - sideB) * (s - sideC));
//     return result;
//   }
// }

// int checkPoint(int m, int n, int x1, int y1, int x2, int y2, int x3, int y3)
// {
//   float a1, a2, a3, a;
//   a = area(x1, y1, x2, y2, x3, y3);
//   a1 = area(m, n, x1, y1, x2, y2);
//   a2 = area(m, n, x2, y2, x3, y3);
//   a3 = area(m, n, x3, y3, x1, y1);
//   if (round(a) == round(a1 + a2 + a3))
//   {
//     return 1;
//   }
//   else
//   {
//     return 0;
//   }
// }

// Write a C Program to Add Two Complex Numbers by Passing Structure to a Function.
// #include <stdio.h>

// struct Complex
// {
//   int real;
//   int img;
// };

// struct Complex add(struct Complex cmp1, struct Complex cmp2)
// {
//   struct Complex ans;
//   ans.real = cmp1.real + cmp2.real;
//   ans.img = cmp1.img + cmp2.img;
//   return ans;
// };

// struct Complex multiply(struct Complex cmp1, struct Complex cmp2)
// {
//   struct Complex ans;
//   ans.real = (cmp1.real * cmp2.real) - (cmp1.img * cmp2.img);
//   ans.img = (cmp1.real * cmp2.img) - (cmp1.img * cmp2.real);
//   return ans;
// };

// int main()
// {
//   struct Complex n1 = {2, 3};
//   struct Complex n2 = {4, 5};
//   struct Complex sum = add(n1, n2);
//   struct Complex multi = multiply(n1, n2);
//   printf("Sum: %d + %di\n", sum.real, sum.img);
//   printf("Multi: %d + %di\n", multi.real, multi.img);
// }

// Write a program that converts a string like "124" to an integer 124.
// #include <stdio.h>

// int main()
// {
//   char strNum[100];
//   int result = 0;
//   printf("Enter a Number: ");
//   gets(strNum);
//   for (int i = 0; strNum[i] != '\0'; i++)
//   {
//     result = (strNum[i] - '0') + result * 10;
//   }
//   printf("The Number in int format is %d", result);
//   return 0;
// }

// Write a program in C to define a structure named Employee with fields for id, name, and salary.Accept details of 5 employees from the user and sort them by salary in ascending order using a function.Display the sorted list.

// #include <stdio.h>
// #include <string.h>

// struct employeeDetails
// {
//   int id;
//   char name[1000];
//   float salary;
// };

// void dataInput();
// void dataDisplay(struct employeeDetails emp[], int size);
// void swap(struct employeeDetails *a, struct employeeDetails *b);
// void sort(struct employeeDetails emp[], int size);

// struct employeeDetails emp[5];

// int main()
// {
//   dataInput();
//   sort(emp, 5);
//   dataDisplay(emp, 5);
//   return 0;
// }

// void dataInput()
// {
//   int flag = 1;
//   for (int i = 0; i < 5; i++)
//   {
//     printf("Enter Employee ID: ");
//     scanf("%d", &emp[i].id);
//     printf("Enter Employee Name: ");
//     scanf(" %[^\n]", &emp[i].name);
//     printf("Enter Employee Salary: ");
//     scanf("%f", &emp[i].salary);
//     printf("Enter 1 to add more Employee Details\nEnter 0 to exit");
//     scanf("%d", &flag);
//     if (!flag)
//     {
//       break;
//     }
//   }
// }

// void swap(struct employeeDetails *a, struct employeeDetails *b)
// {
//   struct employeeDetails temp = *a;
//   *a = *b;
//   *b = temp;
// }
// void sort(struct employeeDetails emp[], int size)
// {
//   for (int i = 0; i < 4; i++)
//   {
//     for (int j = 0; j < 4 - i; j++)
//     {
//       if (emp[j].salary > emp[j + 1].salary)
//       {
//         swap(&emp[j], &emp[j + 1]);
//       }
//     }
//   }
// }

// void dataDisplay(struct employeeDetails emp[], int size)
// {
//   for (int i = 0; i < 5; i++)
//   {
//     printf("Employee ID: %d\n", emp[i].id);
//     printf("Employee Name: %s\n", emp[i].name);
//     printf("Enter Employee Salary: %f\n", emp[i].salary);
//   }
// }

// Write a C program to find the LCM (Least Common Multiple) of two numbers using a user - defined function.
// #include <stdio.h>

// int lcm(int a, int b);
// int gcd(int a, int b);

// int main()
// {
//   int num1, num2;
//   printf("Enter two Numbers: ");
//   scanf("%d %d", &num1, &num2);
//   printf("The LCM of the two numbers is %d", lcm(num1, num2));
//   printf("The GCD of the two numbers is %d", gcd(num1, num2));
//   return 0;
// }

// int lcm(int a, int b)
// {
//   for (int i = 1;; i++)
//   {
//     if ((a * i) % (b) == 0)
//     {
//       return a * i;
//       break;
//     }
//   }
// }

// int gcd(int a, int b)
// {
//   if (b == 0)
//   {
//     return a;
//     return gcd(b, a % b);
//   }
// }

// Write a program in C to define a structure named Employee with fields for ID, name, and salary.Accept details of 5 employees from the user and sort them by name in alphabetical order using a function.Display the sorted list.
// #include <stdio.h>
// #include <string.h>

// struct Employee
// {
//   int id;
//   char name[100];
//   float salary;
// };

// void swap(struct Employee *a, struct Employee *b);
// void dataInput();
// void sort(struct Employee emp[], int size);
// void dataDisplay(struct Employee emp[], int size);

// struct Employee emp[5];

// int main()
// {
//   dataInput();
//   sort(emp, 5);
//   dataDisplay(emp, 5);
//   return 0;
// }

// void dataInput()
// {
//   int flag = 1;
//   for (int i = 0; i < 5; i++)
//   {
//     printf("Enter Employee ID: ");
//     scanf("%d", &emp[i].id);
//     printf("Enter Employee Name: ");
//     scanf(" %[^\n]", &emp[i].name);
//     printf("Enter Employee Salary: ");
//     scanf("%f", &emp[i].salary);
//     printf("Enter 1 to add more Employee Details\nEnter 0 to exit");
//     scanf("%d", &flag);
//     if (!flag)
//     {
//       break;
//     }
//   }
// }

// void swap(struct Employee *a, struct Employee *b)
// {
//   struct Employee temp = *a;
//   *a = *b;
//   *b = temp;
// }

// void sort(struct Employee emp[], int size)
// {
//   for (int i = 0; i < size - 1; i++)
//   {
//     for (int j = 0; j < size - i - 1; j++)
//     {

//       if (strcmp(emp[j].name, emp[j + 1].name) > 0)
//       {
//         swap(&emp[j], &emp[j + 1]);
//       }
//     }
//   }
// }

// void dataDisplay(struct Employee emp[], int size)
// {
//   for (int i = 0; i < 5; i++)
//   {
//     printf("Employee ID: %d\n", emp[i].id);
//     printf("Employee Name: %s\n", emp[i].name);
//     printf("Enter Employee Salary: %f\n", emp[i].salary);
//   }
// }