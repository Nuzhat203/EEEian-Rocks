#include<stdio.h>
int main()
{
int a;
int b;
int sum;
int difference;
int product;
int quotient;
int remainder;
printf("Enter the first number:");
scanf("%d",&a);
printf("Enter the second number:");
scanf("%d",&b);
sum=a+b;
difference=a-b;
product=a*b;
quotient=a/b;
remainder=a%b;
printf("The sum is:%d\n",sum);
printf("The difference is:%d\n",difference);
printf("The product is:%d\n", product);
printf("The quotient is:%d\n",quotient);
printf("The remainder is:%d\n",remainder);
return 0;
}
