#include <stdio.h>
#include <string.h>
#define STRING_MAX 100

int main(){
    char str[STRING_MAX];
    printf("String input!\n");
    scanf("%s", &str);
    int arrLen = strlen(str);
    for(int i=0; i<arrLen/2; i++){
        int temp;
        temp = str[i];
        str[i] = str[arrLen-1-i];
        str[arrLen-1-i] = temp;
    }
    printf("%s", str);
    return 0;
}