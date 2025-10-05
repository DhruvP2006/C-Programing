#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int numerator;
    int denominator;
} Rational;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

Rational simplify(Rational r) {
    int divisor = gcd(abs(r.numerator), abs(r.denominator));
    r.numerator /= divisor;
    r.denominator /= divisor;
    if (r.denominator < 0) {
        r.numerator *= -1;
        r.denominator *= -1;
    }
    return r;
}

Rational add(Rational a, Rational b) {
    Rational result;
    result.numerator = a.numerator * b.denominator + b.numerator * a.denominator;
    result.denominator = a.denominator * b.denominator;
    return simplify(result);
}

Rational subtract(Rational a, Rational b) {
    Rational result;
    result.numerator = a.numerator * b.denominator - b.numerator * a.denominator;
    result.denominator = a.denominator * b.denominator;
    return simplify(result);
}

Rational multiply(Rational a, Rational b) {
    Rational result;
    result.numerator = a.numerator * b.numerator;
    result.denominator = a.denominator * b.denominator;
    return simplify(result);
}

int isEqual(Rational a, Rational b) {
    a = simplify(a);
    b = simplify(b);
    return (a.numerator == b.numerator && a.denominator == b.denominator);
}

void display(Rational r) {
    if (r.denominator == 1)
        printf("%d\n", r.numerator);
    else
        printf("%d/%d\n", r.numerator, r.denominator);
}

int main() {
    Rational num1, num2, result;
    int choice;

    printf("Enter two Rational Numbers\n");
    printf("Enter first rational number (numerator denominator): ");
    scanf("%d %d", &num1.numerator, &num1.denominator);
    printf("Enter second rational number (numerator denominator): ");
    scanf("%d %d", &num2.numerator, &num2.denominator);

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
                result = multiply(num1, num2);
                printf("Multiplication result: ");
                display(result);
                break;
            case 4:
                if (isEqual(num1, num2)) {
                    printf("The rational numbers are equal\n");
                } else {
                    printf("The rational numbers are not equal\n");
                }
                break;
            case 5:
                printf("Exiting program\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }

    } while (choice != 5);

    return 0;
}
