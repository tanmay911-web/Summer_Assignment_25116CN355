#include <stdio.h>

int main(){
    int ch;
    float a,b;
    printf("==MENU DRIVEN CALC==\n");
    printf("1.ADD 2.SUB 3.MUL 4.DIV 5.EXIT\n");
    while (1)
    {
       printf("\nenter your choice: ");
       scanf("%d", &ch);
       if (ch==5)
       {
        printf("exiting program");
        break;
       }
       if (ch>=1&&ch<=4)
       {
        printf("enter 2 numbers: ");
        scanf("%f %f",&a,&b);
       }
       switch (ch)
       {
       case 1:
       printf("result=%.2f\n",a+b);
        break;
        case 2:
       printf("result=%.2f\n",a-b);
        break;
        case 3:
       printf("result=%.2f\n",a*b);
        break;
        case 4:
        if (b!=0)
        {
            printf("result=%.2f\n",a/b);
        }
        else{
            printf("ERROR");
           
        }
        break;
       

       
       default: 
       printf("INVALID!!!!");
       break;
        
       }
       
       
    }
    
    return 0;
}