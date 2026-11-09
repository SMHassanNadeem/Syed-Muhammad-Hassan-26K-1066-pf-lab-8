#include <stdio.h>
#include <string.h>
int main(){
    char fn[50],rn[50];

    printf("Enter first name: ");
    if (fgets(fn, sizeof(fn), stdin) != NULL) {
        fn[strcspn(fn, "\n")] = '\0';
    }

    printf("Enter roll number: ");
    if (fgets(rn, sizeof(rn), stdin) != NULL) {
        rn[strcspn(rn,"\n")] = '\0';
    }

    char fin[256];
    strcpy(fin,fn);
    strcat(fin,"_");
    strcat(fin,rn);

    int len = strlen(fin);

    printf("Username: %s\nLength: %d",fin,len);
}