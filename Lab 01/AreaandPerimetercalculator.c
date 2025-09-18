#include<stdio.h>
int main (){
 
int l, b;
printf("Enter the length:");
scanf("%d",&l);

printf("Enter the width:");
scanf("%d",&b);

int area = l*b;
printf("The area of the Rectangle is:%d\n",l*b);

int perimeter = 2*(l+b);
printf("The perimeter of the Rectangle is:%d\n",perimeter);

return 0; 

}