#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char string1[5],string2[5];
    printf("");
    scanf("%s",&string1);
    printf("");
    scanf("%s",&string2);


    printf("You entered: %s and %s\n",string1,string2);
    return 0;
}