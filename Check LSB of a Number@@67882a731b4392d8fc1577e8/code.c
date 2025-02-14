// Your code here...
#include <stdio.h>

int main() {
    int num;

    scanf("%d", &num);

   
    int lsb = num & 1;

  
    printf("%d\n", lsb);

    return 0;
}
