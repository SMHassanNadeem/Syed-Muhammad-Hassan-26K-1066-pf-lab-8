#include <stdio.h>

int main(){
    char* charArr = "Hello World 2026";
    const char* ptr = charArr;
    int uppercase = 0;
    int lowercase = 0;
    int digits = 0;
    int spaces = 0;

    while(*ptr != '\0'){
        if(*ptr >= 'A' && *ptr <= 'Z'){
            uppercase++;
        }
        if(*ptr >= 'a' && *ptr <= 'z'){
            lowercase++;
        }
        if(*ptr >= '0' && *ptr <= '9'){
            digits++;
        }
        if(*ptr == ' '){
            spaces++;
        }
        ptr++;
    }
    
    printf("Uppercase letters: %d\n", uppercase);
    printf("Lowercase letters: %d\n", lowercase);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);
}