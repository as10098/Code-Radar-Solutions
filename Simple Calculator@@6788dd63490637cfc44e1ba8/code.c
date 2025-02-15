// Your code here...
#include <stdio.h>

int main() {
    double a, b;
    char op;
    
    scanf(" %c %lf %lf", &op, &a, &b);

    if (op == '+')
        printf("%.2lf\n", a + b);
    else if (op == '-')
        printf("%.2lf\n", a - b);
    else if (op == '*')
        printf("%.2lf\n", a * b);
    else if (op == '/')
        b != 0 ? printf("%.2lf\n", a / b) : printf("Error\n");
    else
        printf("Invalid\n");

    return 0;
}
