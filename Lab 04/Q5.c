#include<stdio.h>
int main(){
char op,choice;
choice='Y';
double g,h,i;
while(choice=='Y'){
    printf("Enter an operator:");
    scanf("%c",&op);
    if(op=='q'||op=='Q'){
        break;
    }
    printf("Enter two numbers:");
    scanf("%lf %lf", &g,&h);
    switch(op){
        case '+':
        i=g+h;
        printf("%.2lf+%.2lf=%.2lf\n",g,h,i);
        break;
        case '-':
        i=g-h;
        printf("%.2lf-%.2lf=%.2lf\n",g,h,i);
        break;
        case '*':
        i=g*h;
        printf("%.2lf*%.2lf=%.2lf\n",g,h,i);
        break;
        case '/':
        if(h!=0)
        i=g/h;
    else {
        printf("Error:)");
        break;
    }
    default:
    printf("Invalid operator"); 
}
printf("Want to perfom another calculation?(Y/n):");
scanf(" %c ",&choice);
}
    
    (choice =='Y'||choice=='y'){
printf("Caluclator exited:");
    }
return 0;
}