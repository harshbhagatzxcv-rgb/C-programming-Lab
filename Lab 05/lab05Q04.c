#include <stdio.h>

void findEvenOdd(int arr[], int arrLen){
    int oddCount=0, evenCount=0;
    for(; arrLen>=1; arrLen--){
        if(arr[arrLen-1]%2)
            oddCount++;
        else
            evenCount++;
    }
    printf("Even: %d, Odd: %d", evenCount, oddCount);
}

int main(){
    int arr[] = {13, 15, 92, 26, 27, 8};
    int arrLen = sizeof(arr)/sizeof(int);
    findEvenOdd(arr, arrLen);
    return 0;
}