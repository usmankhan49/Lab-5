#include <stdio.h>
#include <math.h>
int main() {
	
    //checking passenger eligibility
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
         return 0;
    } 
    else {
        printf("Eligible for ride\n");
    }
    
    //ride type and base fare
    
	int ride;
    char distance_type;
    int base_fare;

    printf("\nEnter your ride code: ");
    scanf("%d", &ride);

    switch (ride) {
        case 1:
            printf("Enter 'S' for short distance and 'L' for long distance: ");
            scanf(" %c", &distance_type);

            if (distance_type == 'S' || distance_type == 's')
                base_fare = 100;
            else if (distance_type == 'L' || distance_type == 'l')
                base_fare = 300;
    
            printf("\nYour ride type: Economy\nYour base fare: %d\n", base_fare);
            break;

        case 2:
            printf("\nEnter 'S' for short distance and 'L' for long distance: ");
            scanf(" %c", &distance_type);

            if (distance_type == 'S' || distance_type == 's')
                base_fare = 100;
            else if (distance_type == 'L' || distance_type == 'l')
                base_fare = 300;
            

            printf("Your ride type: Business\nYour base fare: %d\n", base_fare);
            break;

        case 3:
            printf("\nEnter 'S' for short distance and 'L' for long distance: ");
            scanf(" %c", &distance_type);

            if (distance_type == 'S' || distance_type == 's')
                base_fare = 100;
            else if (distance_type == 'L' || distance_type == 'l')
                base_fare = 300;
            

            printf("\nYour ride type: Luxury\nYour base fare: %d\n", base_fare);
            break;

        default:
            printf("\nInvalid ride code.\n");
    }
    
    //surge multiplier calc
    
    int requests;
    float surge_multiplier;

    printf("\nEnter number of rides requested in the area: ");
    scanf("%d", &requests);

    
    surge_multiplier = sqrt(requests) / 2;

    if (surge_multiplier > 3)
        surge_multiplier = 3;

    printf("Final Surge Multiplier: %.2f\n", surge_multiplier);
    
    //discount percentage
    
    int points, discount;
    
    printf("\nEnter your loyalty points: ");
    scanf("%d", &points);
    
    (points > 1000) ? (discount = 20) : (discount = 5);
    
    printf("Your discount percentage is %d.\n", discount);
    
    
    //driver assignment
    
     int rating;
    int rating_distance;
    
    printf("\nEnter driving rating: ");
    scanf("%d", &rating);
    
    printf("Enter driving distance: ");
    scanf("%d", &rating_distance);
    
    (rating >= 4 && rating_distance <= 5) ?
    printf("Top driver nearby\n") :
    (rating >= 3 && rating_distance <= 10) ?
    printf("Average driver assigned\n") :
    printf("No suitable driver available\n");
    
    //distance fare/ fare
    
    int fare;
    int distance;
    
    printf("\nEnter ride distance: ");
    scanf("%d", &distance);
    
    if (ride == 1)
    fare = 50;
    else if (ride == 2)
    fare = 100;
    else if
    (ride == 3)
    fare = 200;
    
    //total fare
    
    float total_fare;
    
    total_fare = surge_multiplier * (fare * distance + base_fare);
    total_fare -= (total_fare * discount/100);

    printf("\n       RIDE SUMMARY        \n");
    printf("Passenger Eligible: Yes\n");
    printf("Base Fare: %d\n", base_fare);
    printf("Surge Multiplier: %.2f\n", surge_multiplier);
    printf("Discount Applied: %d%%\n", discount);
    printf("Final Fare: %.2f\n", total_fare);
    
    

    return 0;
}

