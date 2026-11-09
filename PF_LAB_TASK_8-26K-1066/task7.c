#include <stdio.h>
#include <string.h>

int main(){
    char sC[50] = "nu2026";

    char uI[256];
    printf("Enter code: ");
    if (fgets(uI, sizeof(uI), stdin) != NULL) {
        uI[strcspn(uI, "\n")] = '\0';
    }

    if(strcmp(uI,sC) == 0){
        printf("\nAccess granted\n");
    }else{
        printf("\nAccess denied\n");
    }

    char stA[3] = "";
    char* stCh = strncat(stA,uI,2);
    if(strcmp(stCh,"nu") == 0){
        printf("\nCode starts with \"nu\": Yes\n");
    }else{
        printf("\nCode starts with \"nu\": No\n");
    }

    return 0;
}