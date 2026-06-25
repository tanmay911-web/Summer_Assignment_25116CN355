#include <stdio.h>

int main(){
    int score=0,ans;
    printf("1.which is the national bird of India?\n");
    printf("1) peacock 2)sparrow\nAnswer: ");
    scanf("%d",&ans);
    if (ans==1)
    {
        score++;
    }
    printf("2. what is 5 x 5?\n");
printf("1) 20 2) 25");
scanf("%d",&ans);
if (ans==2)
{
   score++;
}
printf("quiz over!! your total score is :%d/2\n",score);


    
    return 0;
}