#include <stdio.h>
int main()
{
    int count[256] = {0};
    char s1[100],s2[100];
    printf("enter the two strings:");
    scanf("%s %s",s1,s2);
    int i;
    for ( i = 0; s1[i]&&s2[i]; i++)
    {
        count[(unsigned char)s1[i]]++;
        count[(unsigned char)s2[i]]--;
    }
    if (s1[i]||s2[i])
    {
        printf("not anagrams.\n");
        return 0;
    }
    for (i = 0; i < 256; i++) {
        if (count[i] != 0) {
            printf("Not Anagrams\n");
            return 0;
        }
    }
    printf("strings are anagrams");
    return 0;
}
    