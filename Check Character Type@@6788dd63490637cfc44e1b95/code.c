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
    if(ch >='1' && ch <= '100'){
        printf("Digit");
    }
    return 0;
}