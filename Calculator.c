#include <stdio.h>

int main() {
    char op;
    double num1, num2;

    
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);

    
    printf("Enter two numbers (separated by space): ");
    scanf("%lf %lf", &num1, &num2);

    // Perform calculation based on the operator
    switch(op) {
        case '+':
            printf("Result: %.2lf\n", num1 + num2);
            break;
        case '-':
            printf("Result: %.2lf\n", num1 - num2);
            break;
        case '*':
            printf("Result: %.2lf\n", num1 * num2);
            break;
        case '/':
            if(num2 != 0)
                printf("Result: %.2lf\n", num1 / num2);
            else
                printf("Error: Division by zero is not allowed!\n");
            break;
        default:
            printf("Invalid operator entered!\n");
    }

    return 0;
}
