#include <stdio.h>

int main() {
    int age;
    int acc_balance;

    printf("Enter age: ");
    scanf("%d", &age);
    
    printf("Enter account balance: ");
    scanf("%f", &acc_balance);

    if (age < 21) {
        printf("Not eligible for ride (underage)\n");
    } 
    else if (acc_balance < 200) {
         printf("Not eligible (insufficient balance)\n");
    } 
    else {
        printf("Eligible for ride\n");
    }

    return 0;
}

