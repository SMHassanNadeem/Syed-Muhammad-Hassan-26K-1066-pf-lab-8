#include <stdio.h>
#include <string.h>
int main(){
    char sub[256][256];
    int len[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter subject %d ",i+1);
        
        if(fgets(sub[i],sizeof(sub[i]),stdin) != NULL){
            sub[i][strcspn(sub[i],"\n")] = '\0';
        }

        len[i] = strlen(sub[i]);
    }
    
    int h = 0;
    for (int i = 1; i < 5; i++)
    {
        if(len[i] > len[h]){
            h = i;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d. %s\n",i+1,sub[i]);
    }
    
    printf("Longest subject: %s \n",sub[h]);
}

// Maths
// Programming
// Physics
// English
// Calculus