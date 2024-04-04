#include<stdio.h>
int main(){
    int arr[9]={2,3,44,5,6,7,8,4,8};
    printf("original array");
    for(int i=0;i<9;i++){
        printf("%d\t",arr[i]);
    }
       printf("\n");
    printf("array in reverse order");
    for(int i=8;i>=0;i--){
        printf("%d\t",arr[i]);
    }
      printf("\n");
    return 0;
}