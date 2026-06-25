#include<stdio.h>
int main(){
    int opt;
    float baln=5000.0,amount;
    printf("--- ATM Machine --\n");
    printf("1.check balance\n2.deposit\n3.withdraw\n");
    printf("select an option");
    scanf("%d",&opt);
    switch (opt)
    {
    case 1:
        printf("Your current balance is: %.2f\n", baln);
        break;
        case 2:
        printf("Enter amount to deposit:");
            scanf("%f",&amount);
            baln = baln + amount;
            printf("New balance: %.2f\n", baln);
            break;
            case 3:
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            if (amount <= baln) {
                baln = baln - amount;
                printf("Withdrawal successful. Remaining: %.2f\n", baln);
            } else {
                printf("Error: Insufficient funds.\n");
            }
            break;
    
    default:
    printf("Invalid selection.\n");
        break;
    }


}