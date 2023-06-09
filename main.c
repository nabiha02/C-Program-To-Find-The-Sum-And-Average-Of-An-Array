//Write a program that takes input from user about the amount of numbers & select the numbers
//and find the sum & average of an Array

#include <stdio.h>

int main(void){

  int a[100], sum=0 ,i,n ;

   printf("How many number you want?: ");
   scanf("%d", &n);

   printf("Enter %d numbers: ", n);

  for(i=0; i<n ; i++){

  scanf("%d", &a[i]);

    sum = sum+ a[i];
  }

  printf("The sum is: %d\n", sum);
  printf("The average is: %f\n", (float)sum/5);
}
