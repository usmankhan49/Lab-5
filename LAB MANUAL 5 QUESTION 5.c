#include<stdio.h>

int main(){
    
    int points, discount;
    
    printf("Enter your loyalty points: ");
    scanf("%d", &points);
    
    (points > 1000) ? (discount = 20) : (discount = 5);
    
    printf("Your discount percentage is %d.\n", discount);
    
    return 0;
}

