#include <stdio.h>
#include <math.h>  

int main(){
    int requests;
    float surge_multiplier;

    printf("Enter number of rides requested in the area: ");
    scanf("%d", &requests);

    
    surge_multiplier = sqrt(requests) / 2;

    if (surge_multiplier > 3)
        surge_multiplier = 3;

    printf("Final Surge Multiplier: %.2f\n", surge_multiplier);


    return 0;
}

