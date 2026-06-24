#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("enter the sentence :");

    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';
    int maxL=0,currentL=0,maxstart=0,start=0;
    int len=strlen(str);
    for (int i = 0; i <= len; i++)
    {
      if (str[i] == ' ' || str[i] == '\0') {
            if (currentL > maxL) {
                maxL = currentL;
                maxstart = start;
            }
            currentL = 0;
            start = i + 1;
    }
    else{
        currentL++;
    }
}
printf("the longest word ::");
for (int i = 0; i < maxL; i++)
{
    printf("%c",str[maxstart+i]);
}
printf("\n");
return 0;
}

    