#include <stdio.h>
int main(void){
    int arr[3],small=0;

    printf("Enter three numbers :");
    for(int i=0; i<=2; i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<=2; i++){
        (small < arr[i]) ? small=arr[i]: small=small;
    }

    printf("%d ",small);
}