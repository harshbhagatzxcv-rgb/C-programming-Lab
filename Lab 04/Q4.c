#include<stdio.h>
int main(){
    int n;
    int factorial=1;
    int i=1;


    printf("Enter a positive integer:");
    scanf("%d",&n);
    if(n<0){
        printf("Error:)");
        return 1;
    }
    else if (n>15){
        printf("Warning:)");
    }
        while(i<= n ){
            factorial *=i;
            i++;
        }
    
     printf("factorial of %d= %d\n",n,factorial);
    return 0;
}