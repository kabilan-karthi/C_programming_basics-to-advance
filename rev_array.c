#include <stdio.h>
void rev(int arr[],int n){
    int l=0,r=n-1,temp;
    while(l<r){
        temp=arr[l];
        arr[l]=arr[r];
        arr[r]=temp;
        l++;
        r--;
    }
}
int main(){
        int arr[]={10,20,30,40,50};
        int n=sizeof(arr)/sizeof(arr[0]);
        rev(arr,n);
        for(int i=0;i<n;i++){
            printf("%d\t",arr[i]);
        }
}
