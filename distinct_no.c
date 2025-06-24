#include <stdio.h>
int main() {
    int arr[] = {1, 2, 2, 3, 3, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i=0;i<n;i++){
        int unique=1;
        for(int j=0;j<n;j++){
            if(i!=j && arr[i]==arr[j]){
                unique=0;
                break;
            }
        }
        if(unique){
            printf("%d\n",arr[i]);
        }
        
    }
      
    return 0;
}
