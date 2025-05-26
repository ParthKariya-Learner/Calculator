#include <stdio.h>
#include <math.h>

void printMenu();
double division(double a, double b);
double modulas(int a, int b);

int main() {
    int ch;
    double first, second, result = 0;

    while (1) {
        printMenu();
        scanf("%d", &ch);

        if (ch == 7) {
            break;
        }

        if (ch < 1 || ch > 7) {
            fprintf(stderr, "Invalid Menu Choice\n");
            continue;
        }

        printf("\nPlease Enter the first Number: ");
        scanf("%lf", &first);
        printf("Please Enter the second Number: ");
        scanf("%lf", &second);

        switch (ch) {
            case 1:
                result = first + second;
                break;
            case 2:
                result = first - second;
                break;
            case 3:
                result = first * second;
                break;
            case 4:
                result = division(first, second);
                break;
            case 5:
                result = modulas((int)first, (int)second);
                break;
            case 6:
                result = pow(first, second);
                break;
        }

        if (!isnan(result)) {
            printf("Your Result is: %lf\n", result);
        }
    }

    printf("\nThank you for using the calculator!\n");
    return 0;
}

double division(double a, double b) {
    if (b == 0) {
        fprintf(stderr, "Invalid Argument: Division by zero\n");
        return NAN;
    } else {
        return a / b;
    }
}

double modulas(int a, int b) {
    if (b == 0) {
        fprintf(stderr, "Invalid Argument: Modulus by zero\n");
        return NAN;
    } else {
        return a % b;
    }
}

void printMenu() {
    printf("\n____________________________________\n");
    printf("Welcome to our Calculator!\n");
    printf("Choose one of the following options:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("6. Power\n");
    printf("7. Exit\n");
    printf("Enter your choice: ");
}
