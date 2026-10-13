#include <stdio.h>

int main(){
     
  int fare = 15;
  int distance;
  int age;

  printf("Enter the distance in km: ");
  scanf("%d", &distance);
  printf("Enter your age: ");
  scanf("%d", &age);

  if (age>= 60){
    printf("20%% discount applied!")
  } else if (age<= 16){
    printf("20%% discount applied!")

  }else{
    printf("No discount applied.")
  }

    




    return 0;
}