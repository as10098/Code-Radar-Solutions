// Your code here...
// Your code here...
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    
    if(a==1){
        printf("Monday\n");
        }
    if(a==2){
        printf("Tuesday\n");
    }
    if(a==3){
        printf("Wednesday\n");
    }
    if(a==4){
        printf("Thursday\n");
    }
    if(a==5){
        printf("Friday\n");
    }
    if(a==6){
        printf("Saturday\n");
    }
    if(a==7){
        printf("Sunday\n");
    }
    else if((a!=1)||(a!=2)||(a!=3)||(a!=4)||(a!=5)||(a!=6)||(a!=7)){
        printf("Invalid");
    }
    return 0;

}