#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float real;
    float imaginary;
} Complex;

Complex add(Complex a, Complex b) {
    Complex result;
    result.real = a.real + b.real;
    result.imaginary = a.imaginary + b.imaginary;
    return result;
}

Complex subtract(Complex a, Complex b) {
    Complex result;
    result.real = a.real - b.real;
    result.imaginary = a.imaginary - b.imaginary;
    return result;
}

Complex multiplication(Complex a, Complex b) {
    Complex result;
    result.real = a.real * b.real - a.imaginary * b.imaginary;
    result.imaginary = a.real * b.imaginary + a.imaginary * b.real;
    return result;
}

int isEqual(Complex a, Complex b) {
    return (a.real == b.real && a.imaginary == b.imaginary);
}

void display(Complex c) {
    printf("%.2f + %.2fi\n", c.real, c.imaginary);
}

int main() {
    Complex num1, num2, result;
    int choice;

    printf("Enter 2 Complex Numbers\n");
    printf("Enter first Complex number (real imaginary): ");
    scanf("%f %f", &num1.real, &num1.imaginary);

    printf("Enter second Complex number (real imaginary): ");
    scanf("%f %f", &num2.real, &num2.imaginary);

    do {
        printf("\n---- Menu ----\n1. Add\n2. Subtract\n3. Multiply\n4. Check Equality\n5. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                result = add(num1, num2);
                printf("Addition result: ");
                display(result);
                break;
            case 2:
                result = subtract(num1, num2);
                printf("Subtraction result: ");
                display(result);
                break;
            case 3:
                result = multiplication(num1, num2);
                printf("Multiplication result: ");
                display(result);
                break;
            case 4:
                if (isEqual(num1, num2)) {
                    printf("The complex numbers are equal\n");
                } else {
                    printf("The complex numbers are not equal\n");
                }
                break;
            case 5:
                printf("Exiting program\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
                break;
        }
    } while (choice != 5);

    return 0;
}
