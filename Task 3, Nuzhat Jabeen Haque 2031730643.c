#include<stdio.h>
int main()
{
float celcius;
float fahrenheit;
printf("Enter the temperature in celcius:");
scanf("%f",&celcius);
fahrenheit=celcius*1.8+32;
printf("The temperature in fahrenheit is:%.2f\n",fahrenheit);
return 0;
}
