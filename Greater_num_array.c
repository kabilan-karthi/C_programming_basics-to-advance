#include<stdio.h>
int main(){
    int arr[]={10,20,30,40,50};
    int size=sizeof(arr)/sizeof(arr[0]);
    int res=arr[0];
    for(int i=0;i<size;i++){
        if(res<arr[i]){
            res=arr[i];
        }
    }
    printf("Array Elements:");
    for(int i=0;i<size;i++){
        printf(" %d",arr[i]);
    }
    printf("\nGreatest of all number:%d",res);
}
