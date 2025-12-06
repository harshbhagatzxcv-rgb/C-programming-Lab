#include <stdio.h>

void arrayMax(int arr[], int arrSize){
    int temp = arr[arrSize-1];
    for(; arrSize>0; arrSize--){
        if(temp<arr[arrSize-1]){
            temp=arr[arrSize-1];
        }
    }
    printf("Max is: %d\n", temp);
}

void arrayMin(int arr[], int arrSize){
    int temp = arr[arrSize-1];
    for(; arrSize>0; arrSize--){
        if(temp>arr[arrSize-1]){
            temp=arr[arrSize-1];
        }
    }
    printf("Max is: %d\n", temp);
}

int main(){
    int arr[] = {1001, 6991, 55, 456, 777};
    int arrLen = sizeof(arr)/sizeof(int);
    arrayMax(arr, arrLen);
    arrayMin(arr, arrLen);
    return 0;
}