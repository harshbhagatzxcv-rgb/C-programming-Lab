#include<stdio.h>
int main(){

double cTemperature;
printf("Enter temperature in celsius:");
scanf("%lf",&cTemperature);
printf("Farenheit Temperature: %lf\n",((cTemperature*9/5)+32));
return 0;

}