#include<stdio.h>
int main(){

int num1, num2;
char operators;
 printf("Enter first number: ");
 scanf("%d",&num1);
 printf("Enter an operator: ");
 scanf(" %c",&operators);
 printf("Enter the second number: ");
 scanf("%d",&num2);
switch (operators){
case '+':
printf ("Result: %d\n", num1+num2);
break;
case '-':
printf("Result: %d\n", num1-num2);
break;
case '*':
printf("Result: %d\n", num1*num2);
break;
case '/':
printf("Result: %d\n", num1/num2);
break;
default:
printf("Error: Invalid input\n");
}
    return 0;
}