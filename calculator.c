#include <stdio.h>

int main()
{
    char operator;
    double num1, num2, result;

    // Get operator and numbers from the user
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform the calculation based on the operator
    switch (operator)
    {
    case '+': // Addition
        result = num1 + num2;
        break;
    case '-': // Subtraction
        result = num1 - num2;
        break;
    case '*': // Multiplication
        result = num1 * num2;
        break;
    case '/': // Division
        // Check for division by zero
        if (num2 != 0)
        {
            result = num1 / num2;
        }
        else
        {
            printf("Error: Division by zero\n");
            return 1; // Exit the program with an error code
        }
        break;
    default:
        printf("Error: Invalid operator!\n");
        return 1; // Exit the program with an error code
    }

    // Display the result
    printf("Result: %.2lf\n", result);

    return 0;
}
