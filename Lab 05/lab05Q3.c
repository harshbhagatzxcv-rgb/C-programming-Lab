#include <stdio.h>

float findAvg(int arr[], int arrLen){
    float sum=0;
    for(int i=0; i<arrLen; i++){
        sum+=arr[i];
    }
    return sum/arrLen;
}

int main(){
    int arr[] = {10, 15, 12, 25, 20};
    int arrLen = sizeof(arr)/sizeof(int);
    printf("Average is: %f", findAvg(arr, arrLen));
    return 0;
}