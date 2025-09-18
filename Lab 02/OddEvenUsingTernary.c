#include<stdio.h>
int main(){

int a;
printf("Enter the no.: ");
scanf("%d",&a);
(a&1)?printf("%d is odd",a):printf("%d is even",a);
    return 0;
}