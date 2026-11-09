#include <stdio.h>

int divide(int a,int b,int* result){
    if(result == NULL){
        return -1;
    }
    if(b == 0){
        return -1;
    }
    *result = a / b;

    return 0;
}
int main(){
    int a,b,result = 0;
    printf("Enter two numbers with space");
    scanf("%d %d",&a,&b);

    printf("--- Testing Case 1: Success (Valid parameters) ---\n");
    int status = divide(a,b,&result);
    if (status == 0) {
        printf("Success! %d / %d = %d\n\n", a,b,result);
    } else {
        printf("Failed execution.\n\n");
    }

    printf("--- Testing Case 2: Error (Division by Zero) ---\n");
    status = divide(a, 0, &result);
    if (status == -1) {
        printf("Caught error: Division by zero is blocked (returned -1).\n\n");
    } else {
        printf("Failed to catch error.\n\n");
    }

    printf("--- Testing Case 3: Error (NULL result Pointer) ---\n");
    status = divide(a, b, NULL);
    if (status == -1) {
        printf("Caught error: NULL pointer assignment is blocked (returned -1).\n\n");
    } else {
        printf("Failed to catch error.\n\n");
    }

}