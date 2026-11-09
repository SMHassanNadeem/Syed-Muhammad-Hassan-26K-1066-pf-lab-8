#include <stdio.h>

int main(){
    int age = 20;

    int* p = &age;

    (*p)++;

    printf("%d",age);
}