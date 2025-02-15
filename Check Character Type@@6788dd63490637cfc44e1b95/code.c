// Your code here...
#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        printf("Vowel");
    }
    if((ch >='a' && ch <= 'z' )|| (ch >='A' && ch <= 'Z' )){
        printf("Consonant");
    }
    if(ch >='0' && ch <= '9'){
        printf("Digit");
    }
    return 0;
}