#include<stdio.h>
int main(){
    int choice;
    float balance = 20000,amount;
    
    printf("ATM MENU\n");
    printf("1.Deposit\n");
    printf("2.Withdraw\n");
    printf("3.Balance Enquiry\n");
    printf("Enter your choice:");
    scanf("%d", &choice);
    
    if(choice == 1) {
        printf("Enter deposit amount: ");
        scanf("%f",&amount);
        balance = balance + amount;
        printf("Amount Deposited successfully\n");
        printf("Current Balance: %2f",balance);
    }
    else if(choice == 2) {
        printf("Enter withdrawal amount:");
        scanf("%f", &amount);
        
        if(amount <= balance){
             balance = balance - amount;
             printf("Please collect your cash\n");
             printf("Remaining Balance: %2f",balance);
        } else{
            printf("Insufficient Balance");
        }
        
    }
    else if(choice == 3){
        printf("Your current Balance: %2f",balance);
}
else {
    printf("Invalid choice");
}
return 0;
}