/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {  

  int num1 , num2 , total;
  float avg  = 0 ;

  printf("Enter the number :");
  scanf ("%d" , &num1);

  printf("Enter the number :1");
  scanf("%d" , &num2);

  total = num1 + num2 ;
  avg = (float)total / 2 ;

  printf("total is :%d\n " ,  total);
  printf("average is %.2f\n" ,avg);

  return 0;
}

