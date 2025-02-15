// Your code here...
#include <stdio.h>

int main() {
    int a, b;
    char op;
    
    scanf("%d %d %c", &a, &b, &op);

    if (op == '+')
        printf("%d\n", a + b);
    else if (op == '-')
        printf("%d\n", a - b);
    else if (op == '*')
        printf("%d\n", a * b);
    else if (op == '/')
        b != 0 ? printf("%d\n", a / b) : printf("error\n");
    else
        printf("Invalid\n");

    return 0;
}
