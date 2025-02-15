// Your code here...
#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);

    if(ch >='b' && ch <= 'z' ){
        printf("Consonant");
    }
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        printf("Vowel");
    }
    if(ch >='0' && ch <= '9'){
        printf("Digit");
    }
    return 0;
}