#include <stdio.h>

int main() 
{
    int a, b;
    char op;
    printf("Enter the first number: ");
    scanf("%d", &a);
    
    printf("ENter the second number: ");
    scanf("%d", &b);

    printf("Select the operation which you want to use (+, -, / or *): ");
    scanf(" %c", &op);

    switch(op) 
    {
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '*':
            printf("%d\n", a * b);
            break;
        case '/':
            if (b != 0)
                printf("%d\n", a / b);
            else
                printf("Error: Division by zero\n");
            break;
        case '%':
            if (b != 0)
                printf("%d\n", a % b);
            else
                printf("Error: Division by zero\n");
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}
