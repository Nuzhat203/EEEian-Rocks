#include<stdio.h>
int main()
{
float a;
float b;
float c;
float sum;
float average;
printf("Enter the first number:");
scanf("%f",&a);
printf("Enter the second number:");
scanf("%f",&b);
printf("Enter the third number:");
scanf("%f",&c);
sum=a+b+c;
average=sum/3;
printf("The sum of the three numbers are:%.1f\n",sum);
printf("The average of three numbers are:%.1f\n",average);
return 0;
}
