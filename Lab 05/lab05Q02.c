#include <stdio.h>

void reverseArray(int arr[], int arrLen){
    int temp;
    for(int i=0; i<arrLen/2; i++){
        temp = arr[i];
        arr[i] = arr[arrLen-1-i];
        arr[arrLen-1-i] = temp;

    }
}

int main(){
    int arr[] = {567, 81, 134, 982, 123, 23};
    int arrLen = sizeof(arr)/sizeof(int);
    reverseArray(arr, arrLen);
    for(int i=0; i<arrLen; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}