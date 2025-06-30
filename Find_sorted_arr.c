#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        if((arr[i]<arr[i+2])||(arr[i]<arr[i+1])){
         printf("Sorted Array");
         break;
        }
        else{
            printf("Not a sorted Array");
        }
        

    }
    
}
