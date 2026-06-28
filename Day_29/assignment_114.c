#include <stdio.h>

int main(){
    int ch,a[50],n=0,i;
    int item,found;
    printf("==ARRAY OPERATION SYSTEM==\n");
    printf("1.INPUT 2.DISPLAY 3.SEARCH 4.EXIT\n");
    while (1)
    {
       printf("\nenter your choice: ");
       scanf("%d", &ch);
       if (ch==4)
       {
        printf("exiting program.............!!!!!!");
        break;
       }
       while (getchar()!= '\n');
       
       switch (ch)
       {
       case 1:
       printf("enter the number of element: ");
       scanf("%d",&n);
       printf("enter the array elements: ",n);
       for ( i = 0; i < n; i++)
       {
        scanf("%d",&a[i]);
       }
        break;
     case 2:
       if (n==0)
       {
        printf("array is empty");
       }
       else{
        printf("array elements are: ");
        for ( i = 0; i < n; i++)
        {
            printf("%d",a[i]);
        }
        printf("\n");
        
       }
       break;
       
        case 3:
      if (n==0)
      {
        printf("array is empty");
      }
      else{
        printf("enter the element to search: ");
        scanf("%d",&item);
        found=0;
        for ( i = 0; i < n; i++)
        {
         if (a[i]==item)
         {
           printf("element found at index::%d\n",i);
           found=1;
           break;
         }
         
        }
        if (found==0)
        {
     printf("element not found");
        }
        
        
      }
      
        break;
       

       
       default: 
       printf("INVALID!!!!");
       break;
        
       }
       
       
    }
    
    return 0;
}