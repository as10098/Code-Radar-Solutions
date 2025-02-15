// Your code here...
#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    scanf("%d", &n);

    if (n <= 1) {
        printf("Not Prime\n");
        return 0;
    }
    if (n == 2 || n == 3) {
        printf("Prime\n");
        return 0;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        printf("Not Prime\n");
        return 0;
    }

    for (i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            printf("Not Prime\n");
            return 0;
        }
    }

    printf("Prime\n");
    return 0;
}
