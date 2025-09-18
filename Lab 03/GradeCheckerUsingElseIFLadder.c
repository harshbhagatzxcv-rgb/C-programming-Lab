#include<stdio.h>
int main(){
int d;
printf("Enter marks: ");
scanf("%d",&d);

if (d>=90 && d<=100){
    printf("Grade A \n");
}
else if(d>=75&&d<89)
{
    printf("Grade B \n");
}
else if(d>=50&&d<74)
{
    printf("Grade C \n");
}
else if(d >=0 && d< 50 ){
    printf("Grade F \n");

}
else {
    printf("Invalid marks entered.\n");
}

    return 0;
}