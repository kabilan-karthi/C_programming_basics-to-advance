#include<stdio.h>
int main(){
    int arr[10],i,j,temp,n,min;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("\nEnter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        min=i;
    for(j=i+1;j<n;j++){
        if(arr[j]<arr[min]){
            min=j;
        }
    }
    if(min!=i){
        temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
    }
    printf("\nSorted Array\n");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}
