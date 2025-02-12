// Your code here...
#include<stdio.h>
#int main(){
    int a,b,c;
    float average;
    
    printf("Enter 3 numbers: ");
    scanf("%d %d %d",&a,&b,&c);

    average = (a+b+c)/3.0;
    printf("Average: %.4lf\n",average);

    return 0;

 

}