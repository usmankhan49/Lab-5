#include<stdio.h>

int main(){
    
    int rating;
    int distance;
    
    printf("Enter driving rating: ");
    scanf("%d", &rating);
    
    printf("Enter driving distance: ");
    scanf("%d", &distance);
    
    (rating >= 4 && distance <= 5) ?
    printf("Top driver nearby") :
    (rating >= 3 && distance <= 10) ?
    printf("Average driver assigned") :
    printf("No suitable driver available");
    
    
    return 0;
}

