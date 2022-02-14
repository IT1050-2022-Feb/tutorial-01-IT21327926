/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   int x;
    int y;
    float total;
    float avg;
    
    printf("Enter subject 1 mark");
    scanf("%d",&x);
    printf("Enter subject 2 mark");
    scanf("%d",&y);
    
    total = x+y;
    avg = total/2.0;
    printf("average is %.2f", avg);
    
  
  return 0;
}

