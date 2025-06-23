#include<stdio.h>
int main(){
    int arr[]={1,2,3,5,6,7};
    int target=5;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            printf("The number %d found in the index %d ",arr[i],i);
        }
    }
}
