#include<stdio.h>
int main(){
int a, b, c, d;
printf("Enter the number:");
scanf("%d %d %d", &a, &b, &c);
d=a>b?(b>c?a:(a>c?a:c)):(b>c?b:c);
printf("Largest is: %d",d);
return 0;
    
}