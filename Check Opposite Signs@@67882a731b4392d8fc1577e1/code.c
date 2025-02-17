// Your code here...
#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);

    if((a==-a && b==b)|| (a==a && b==-b)){
        printf("True\n");
    }
    else{
        printf("False\n");
    }
    return 0;
}
