#include <stdio.h>
#include <string.h>
#include <math.h>

// Utility function to print a binary array
void printBinary(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("%d", arr[i]);
  }
}

// Function to convert a floating-point number to IEEE 754 single-precision (32-bit)
void singlePrecision(float n)
{
  int sign = (n < 0) ? 1 : 0;
  if (n < 0)
    n = -n;

  int int_part = (int)n;
  float frac_part = n - int_part;

  int int_binary[32];
  int int_len = 0;
  if (int_part == 0)
  {
    int_binary[0] = 0;
    int_len = 1;
  }
  else
  {
    while (int_part > 0)
    {
      int_binary[int_len++] = int_part % 2;
      int_part /= 2;
    }
    for (int i = 0; i < int_len / 2; i++)
    {
      int temp = int_binary[i];
      int_binary[i] = int_binary[int_len - 1 - i];
      int_binary[int_len - 1 - i] = temp;
    }
  }

  int frac_binary[23];
  int frac_len = 0;
  while (frac_len < 23)
  {
    frac_part *= 2;
    if (frac_part >= 1)
    {
      frac_binary[frac_len++] = 1;
      frac_part -= 1;
    }
    else
    {
      frac_binary[frac_len++] = 0;
    }
  }

  int exponent = 0;
  if (int_len > 1 || (int_len == 1 && int_binary[0] == 1))
  {
    exponent = int_len - 1;
  }
  else
  {
    int first_one = -1;
    for (int i = 0; i < 23; i++)
    {
      if (frac_binary[i] == 1)
      {
        first_one = i;
        break;
      }
    }
    if (first_one != -1)
    {
      exponent = -(first_one + 1);
    }
  }

  int biased_exp = exponent + 127;
  int exp_binary[8] = {0};
  for (int i = 7; i >= 0; i--)
  {
    exp_binary[i] = biased_exp % 2;
    biased_exp /= 2;
  }

  int mantissa[23];
  int mantissa_idx = 0;
  for (int i = 1; i < int_len; i++)
  {
    if (mantissa_idx < 23)
      mantissa[mantissa_idx++] = int_binary[i];
  }
  if (exponent < 0)
  {
    for (int i = -exponent; i < frac_len; i++)
    {
      if (mantissa_idx < 23)
        mantissa[mantissa_idx++] = frac_binary[i];
    }
  }
  else
  {
    for (int i = 0; i < frac_len; i++)
    {
      if (mantissa_idx < 23)
        mantissa[mantissa_idx++] = frac_binary[i];
    }
  }
  while (mantissa_idx < 23)
  {
    mantissa[mantissa_idx++] = 0;
  }

  printf("| 32-Bit | %d      | ", sign);
  printBinary(exp_binary, 8);
  printf("    | ");
  printBinary(mantissa, 23);
  printf("                              |\n");
}

// Function to convert a floating-point number to IEEE 754 double-precision (64-bit)
void doublePrecision(double n)
{
  int sign = (n < 0) ? 1 : 0;
  if (n < 0)
    n = -n;

  long long int_part = (long long)n;
  double frac_part = n - int_part;

  int int_binary[64];
  int int_len = 0;
  if (int_part == 0)
  {
    int_binary[0] = 0;
    int_len = 1;
  }
  else
  {
    while (int_part > 0)
    {
      int_binary[int_len++] = int_part % 2;
      int_part /= 2;
    }
    for (int i = 0; i < int_len / 2; i++)
    {
      int temp = int_binary[i];
      int_binary[i] = int_binary[int_len - 1 - i];
      int_binary[int_len - 1 - i] = temp;
    }
  } 

  int frac_binary[52];
  int frac_len = 0;
  while (frac_len < 52)
  {
    frac_part *= 2;
    if (frac_part >= 1)
    {
      frac_binary[frac_len++] = 1;
      frac_part -= 1;
    }
    else
    {
      frac_binary[frac_len++] = 0;
    }
  }

  int exponent = 0;
  if (int_len > 1 || (int_len == 1 && int_binary[0] == 1))
  {
    exponent = int_len - 1;
  }
  else
  {
    int first_one = -1;
    for (int i = 0; i < 52; i++)
    {
      if (frac_binary[i] == 1)
      {
        first_one = i;
        break;
      }
    }
    if (first_one != -1)
    {
      exponent = -(first_one + 1);
    }
  }

  int biased_exp = exponent + 1023;
  int exp_binary[11] = {0};
  for (int i = 10; i >= 0; i--)
  {
    exp_binary[i] = biased_exp % 2;
    biased_exp /= 2;
  }

  int mantissa[52];
  int mantissa_idx = 0;
  for (int i = 1; i < int_len; i++)
  {
    if (mantissa_idx < 52)
      mantissa[mantissa_idx++] = int_binary[i];
  }
  if (exponent < 0)
  {
    for (int i = -exponent; i < frac_len; i++)
    {
      if (mantissa_idx < 52)
        mantissa[mantissa_idx++] = frac_binary[i];
    }
  }
  else
  {
    for (int i = 0; i < frac_len; i++)
    {
      if (mantissa_idx < 52)
        mantissa[mantissa_idx++] = frac_binary[i];
    }
  }
  while (mantissa_idx < 52)
  {
    mantissa[mantissa_idx++] = 0;
  }

  printf("| 64-Bit | %d      | ", sign);
  printBinary(exp_binary, 11);
  printf(" | ");
  printBinary(mantissa, 52);
  printf(" |\n");
}

int main()
{
  float float_n;
  printf("Enter a floating-point number: ");
  scanf("%f", &float_n);

  double double_n = (double)float_n;

  printf("\n+--------+--------+-------------+------------------------------------------------------+\n");
  printf("| Format | Sign   | Exponent    | Mantissa                                             |\n");
  printf("+--------+--------+-------------+------------------------------------------------------+\n");

  if (float_n == 0.0)
  {
    printf("| 32-Bit | 0      | 00000000    | 00000000000000000000000                              |\n");
    printf("| 64-Bit | 0      | 00000000000 | 0000000000000000000000000000000000000000000000000000 |\n");
  }
  else
  {
    singlePrecision(float_n);
    doublePrecision(double_n);
  }

  printf("+--------+--------+-------------+------------------------------------------------------+\n");

  return 0;
}