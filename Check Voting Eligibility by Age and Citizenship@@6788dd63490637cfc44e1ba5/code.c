// Your code here...
#include <stdio.h>
int main(){
    int age,b;
    scanf("%d %d",&age,&b);

    if((age>=18)){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}