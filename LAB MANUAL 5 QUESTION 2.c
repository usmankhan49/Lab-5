
#include <stdio.h>

int main() {
    int ride;
    char distance;
    int fare;

    printf("Enter your ride code: ");
    scanf("%d", &ride);

    switch (ride) {
        case 1:
            printf("Enter 'S' for short distance and 'L' for long distance: ");
            scanf(" %c", &distance);

            if (distance == 'S' || distance == 's')
                fare = 100;
            else if (distance == 'L' || distance == 'l')
                fare = 300;
    
            printf("Your ride type: Economy\nYour base fare: %d\n", fare);
            break;

        case 2:
            printf("Enter 'S' for short distance and 'L' for long distance: ");
            scanf(" %c", &distance);

            if (distance == 'S' || distance == 's')
                fare = 100;
            else if (distance == 'L' || distance == 'l')
                fare = 300;
            

            printf("Your ride type: Business\nYour base fare: %d\n", fare);
            break;

        case 3:
            printf("Enter 'S' for short distance and 'L' for long distance: ");
            scanf(" %c", &distance);

            if (distance == 'S' || distance == 's')
                fare = 100;
            else if (distance == 'L' || distance == 'l')
                fare = 300;
            

            printf("Your ride type: Luxury\nYour base fare: %d\n", fare);
            break;

        default:
            printf("Invalid ride code.\n");
    }

    return 0;
}

