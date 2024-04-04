#include<stdio.h>
int main(){
    int a[]={2,3,45,6,76,89,60};
    
    for(int i=0;i<=6;i++){
    if(a[i]%2==0){
        printf("%d is even number\n",a[i]);
     }
      else if(a[i]%2!=0){
       printf("%d is odd number\n",a[i]);
     }
     
    }
    }