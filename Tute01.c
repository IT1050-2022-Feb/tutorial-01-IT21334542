/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  float mark[2]={0,0};
  printf("ENTER THE MARK01 ::");
  scanf("%f",&mark[0]);
  printf("ENTER THE MARK02 ::");
  scanf("%f",&mark[1]);

  printf("\n\nAverage Of THE 2 marks IS::%.2f",(mark[0]+mark[1])/2);
  return 0;
}

