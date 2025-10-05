#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void onesComplement(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    arr[i] = arr[i] == 0 ? 1 : 0;
  }
}

void twosComplement(int arr[], int size)
{
  onesComplement(arr, size);
  int carry = 1;
  for (int i = size - 1; i >= 0; i--)
  {
    int sum = arr[i] + carry;
    arr[i] = sum % 2;
    carry = sum / 2;
  }
}

void decimalToBinary(int n, int arr[], int size)
{
  int isNegative = n < 0;
  if (isNegative)
    n = -n;
  for (int i = size - 1; i >= 0; i--)
  {
    arr[i] = n % 2;
    n /= 2;
  }
  if (isNegative)
    twosComplement(arr, size);
}

int *add(const int *a, const int *b, int size)
{
  int *result = (int *)malloc(sizeof(int) * size);
  int carry = 0;
  for (int i = size - 1; i >= 0; i--)
  {
    int sum = a[i] + b[i] + carry;
    result[i] = sum % 2;
    carry = sum / 2;
  }
  return result;
}

void shiftRight(int A[], int Q[], int *q_1, int size)
{
  *q_1 = Q[size - 1];
  for (int i = size - 1; i > 0; i--)
    Q[i] = Q[i - 1];
  Q[0] = A[size - 1];
  for (int i = size - 1; i > 0; i--)
    A[i] = A[i - 1];
}

void printBits(const int *arr, int size)
{
  for (int i = 0; i < size; i++)
    printf("%d", arr[i]);
}

int boothsAlgo(int m, int q)
{
  int n = 4;
  int A[4] = {0}, Q[4], M[4], negM[4], q_1 = 0;

  decimalToBinary(m, M, n);
  decimalToBinary(q, Q, n);

  int onesQ[4];
  memcpy(onesQ, Q, sizeof(Q));
  onesComplement(onesQ, n);
  printf("1's Compliment of Multiplier: ");
  printBits(onesQ, n);
  printf("\n");

  int twosQ[4];
  memcpy(twosQ, Q, sizeof(Q));
  twosComplement(twosQ, n);
  printf("2's Compliment of Multiplier: ");
  printBits(twosQ, n);
  printf("\n\n");

  printf("In binary\nMultiplicand (n1): ");
  printBits(M, n);
  printf("\n");

  printf("Multiplier  (n2): ");
  printBits(Q, n);
  printf("\n");

  int temp[4];
  memcpy(temp, M, sizeof(M));
  twosComplement(temp, n);
  memcpy(negM, temp, sizeof(temp));

  printf("  A   Q  Count\n");

  printBits(A, n);
  printf(" ");
  printBits(Q, n);
  printf(" ");
  printf("  %d\n", n);

  for (int i = n - 1; i >= 0; i--)
  {
    if (Q[n - 1] == 0 && q_1 == 1)
    {
      int *res = add(A, M, n);
      memcpy(A, res, sizeof(int) * n);
      free(res);
      printBits(A, n);
      printf(" ");
      printBits(Q, n);
      printf(" ");
      printf("  %d     %d\n", q_1, i + 1);
    }
    else if (Q[n - 1] == 1 && q_1 == 0)
    {
      int *res = add(A, negM, n);
      memcpy(A, res, sizeof(int) * n);
      free(res);
      printBits(A, n);
      printf(" ");
      printBits(Q, n);
      printf(" ");
      printf("  %d     %d\n", q_1, i + 1);
    }

    shiftRight(A, Q, &q_1, n);
    printBits(A, n);
    printf(" ");
    printBits(Q, n);
    printf(" ");
    printf("  %d     %d\n", q_1, i);
  }

  printf("\nFinal answer in binary: ");
  printBits(A, n);
  printBits(Q, n);
  printf("\n");

  int result = 0;
  for (int i = 0; i < n; i++)
  {
    result = (result << 1) | A[i];
  }
  for (int i = 0; i < n; i++)
  {
    result = (result << 1) | Q[i];
  }

  int sign = A[0];
  if (sign == 1)
  {
    int resBits[8];
    for (int i = 0; i < n; i++)
      resBits[i] = A[i];
    for (int i = 0; i < n; i++)
      resBits[n + i] = Q[i];
    twosComplement(resBits, 8);
    int posResult = 0;
    for (int i = 0; i < 8; i++)
      posResult = (posResult << 1) | resBits[i];
    printf("Final positive answer: %d\n", posResult);
    printf("Final answer: -%d\n", posResult);
  }
  else
  {
    printf("Final positive answer: %d\n", result);
    printf("Final answer: %d\n", result);
  }

  return 0;
}

int main()
{
  int m, q;
  printf("Enter multiplicand (M): ");
  scanf("%d", &m);
  printf("\nEnter multiplier (Q): ");
  scanf("%d", &q);

  boothsAlgo(m, q);
  return 0;
}