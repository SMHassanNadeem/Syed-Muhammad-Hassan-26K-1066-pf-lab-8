#include <stdio.h>

void swap(int* a,int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int x = 8, y = 3;

    printf("x is %d, and y is %d",x,y);

    swap(&x,&y);

    printf("\n values changed \n");
    printf("x is %d, and y is %d",x,y);
}