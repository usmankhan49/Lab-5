#include<stdio.h>
#include<math.h>
int main(){
    
    char ride;
    int distance;
    int fare;
    int requests;
    float surge_multiplier;
    float total_fare;
    
    printf("Enter number of rides requested in the area: ");
    scanf("%d", &requests);

    surge_multiplier = sqrt(requests) / 2;
    
    if (surge_multiplier > 3)
        surge_multiplier = 3;
    
    printf("Enter 'E' for Economy, 'B' for Business and 'L' for Luxury:");
    scanf(" %c", &ride);

    printf("Enter ride distance: ");
    scanf("%d", &distance);
    
    if (ride == 'E' || ride == 'e')
    fare = 50;
    else if (ride == 'B' || ride == 'b')
    fare = 100;
    else if
    (ride == 'L' || ride == 'l')
    fare = 200;
    
    total_fare = surge_multiplier* (fare*distance);
    
    printf("Your total fare is: %.2f",total_fare);
    
    
 return 0;
}

