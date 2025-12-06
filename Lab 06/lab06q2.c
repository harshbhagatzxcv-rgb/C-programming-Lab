#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char str[100];
    int digitCount=0;
    int symbolCount=0, vowelCount=0, consonantCount;
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    printf("String daalo!\n");
    scanf("%s", &str);
    int arrLen = strlen(str);
    for(int i=0; i<arrLen; i++){
        
            if(str[i] >= '0' && str[i] <= '9'){
                digitCount++;
            }
            else if(!(tolower(str[i]) >= 'a' && tolower(str[i]) <= 'z')){
                symbolCount++;
            }
            else{
                for(int j=0; j<sizeof(vowels); j++){
                    if(tolower(str[i]) == vowels[j]){
                        vowelCount++;
                        break;
                    }
                }
            }
            
    }
    consonantCount = arrLen - vowelCount - digitCount - symbolCount;
    printf("vow:%d con:%d dig:%d sym:%d", vowelCount, consonantCount, digitCount, symbolCount);
    return 0;
}