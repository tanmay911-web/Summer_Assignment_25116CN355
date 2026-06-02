#include <stdio.h>
int sum (int n){
    if(n==0){
        return 0;
    }
    else{
        return (n+sum(n-1));
    }
}

int main(){
    int n,r;
    printf("enter the number to find sum:");
    scanf("%d",&n);
    r= sum(n);
    printf("the sum of the number is %d",r);
    return 0;
}
