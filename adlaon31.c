#include <stdio.h>
int main (){

    float distance, discount, fare, finalfare;
    int category;

    printf("Enter Travel Distance (km): ");
    scanf("%f", &distance);

    printf("\nPassenger Category: \n");
    printf("1 - Student\n");
    printf("2 - Senior Citizen\n");
    printf("3 - Regular Passenger\n");
    printf("Enter Category: ");
    scanf("%d", &category);

    if (distance <= 4) {
        fare = 15;
    }else{
        fare = 15 + (distance -4) * 3;
    }if (category == 1 || category == 2) {
        discount = fare * 0.20;
    }else if (category == 3) {
        discount = 0;
    }else{
        printf("Invalid Category!\n");
        return 0;
    }

    finalfare = fare - discount;

    printf("\nBase Fare: P%.2f\n", fare);
    printf("Discount: P%.2f\n", discount);
    printf("Final Fare: P%.2f\n", finalfare);

    return 0;
}