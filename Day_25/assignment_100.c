#include <stdio.h>
#include <string.h>

int main() {
    char words[5][20];
    char temp[20];
    int swapped = 1;

    printf("Enter 5 words:\n");
    for (int i = 0; i < 5; i++) {
    scanf("%s", words[i]); 
    }

       while (swapped == 1) {
        swapped = 0;
        
            for (int i = 0; i < 4; i++) {
            if (strlen(words[i]) > strlen(words[i + 1])) {
        strcpy(temp, words[i]);
       strcpy(words[i], words[i + 1]);
         strcpy(words[i + 1], temp);
                
   swapped = 1;
            }
        }
    }

    printf("\nWords sorted by length:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}