#include <stdio.h>
int sum (int a , int b){
    return a+b;
}
int main(){
    int x,y,add;
    printf("enter the digits whose sum need to be find:");
    scanf("%d %d",&x,&y);
    add= sum(x,y);
    printf("sum of the 2 number is %d",add);
    
    return 0;
}
