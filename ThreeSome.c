#include <stdio.h>
int main(void){

    int size,temp,sum=0,arr[50];
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(arr[j]>arr[i]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    if(size<3){
        
        for(int i=0; i<size; i++){
            sum+= arr[i];
        }
    }else{
        for(int i=0; i<3; i++){
      
        sum+=arr[i];
    }
    }
    

  printf("maximum sum of three elements in an array is %d",sum);
}