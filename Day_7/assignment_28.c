#include <stdio.h>
int reverse(int n, int rn){
    if(n==0){
        return rn;
    }
    else{
        return reverse( n/10,rn*10+n%10);
    }
}

int main(){
    int n,r;
    printf("enter the number:");
    scanf("%d",&n);
    r= reverse(n,0);
    printf("the reverse of the number is  %d",r);
    return 0;
}
