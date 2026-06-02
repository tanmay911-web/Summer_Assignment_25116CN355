#include <stdio.h>
int fact (int n){
    if(n==0){
        return 1;
    }
    else{
        return (n*fact(n-1));
    }
}

int main(){
    int n,r;
    printf("enter the number to find the factorial:");
    scanf("%d",&n);
    r= fact(n);
    printf("the factorial of the number is %d",r);
    return 0;
}
