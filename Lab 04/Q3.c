#include<stdio.h>
int main(){
int n;
int c=0;
printf("Enter an integer:");
scanf("%d",&n);
while(n>=1 || n<=-1){
    c++;
    n/=10;
}
printf("%d", c);
return 0;
}