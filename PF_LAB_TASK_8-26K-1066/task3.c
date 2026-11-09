#include <stdio.h>

int main(){
    int size = 5;
    int array[5] = {4, 9, 2, 7, 5};

    int* p = array;

    int sum = 0;
    int lar = *p;
    for (int i = 0; i < size; i++)
    {
        if(lar < *(p+i)){
            lar = *(p+i);
        }
        sum += *(p+i);
    }
    
    printf("%d\n",sum);
    printf("%d\n",lar);
}