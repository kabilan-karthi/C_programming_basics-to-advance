#include <stdio.h>

int main() {
    int arr1[2][3] = {{1, 2, 3}, {3, 2, 4}};
    int arr2[2][3] = {{1, 2, 3}, {3, 2, 4}};
    int result[2][3];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            result[i][j]=arr1[i][j]*arr2[i][j];
            }
    }
    printf("Resultant Matrix\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
}
