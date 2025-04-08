// Your code here...
#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int a = 1;
        for (int j = 1; j <= n + 1 - i; j++) {
            int d = a + 64; // 1+64 = 65 = 'A'
            char ch = (char)d;
            printf("%c", ch);
            a++; // increase 'a' for next character
        }
        printf("\n");
    }
    return 0;
}
