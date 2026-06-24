#include <stdio.h>
#include <string.h>

int main() {
    char nameList[5][30];
    char swapTemp[30];

       printf("Please enter 5 names:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%s", nameList[i]);
    }

       for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            
                if (strcmp(nameList[i], nameList[j]) > 0) {
                strcpy(swapTemp, nameList[i]);
                strcpy(nameList[i], nameList[j]);
                strcpy(nameList[j], swapTemp);
            }
        }
    }

       printf("\nHere are the names in alphabetical order:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", nameList[i]);
    }

    return 0;
}