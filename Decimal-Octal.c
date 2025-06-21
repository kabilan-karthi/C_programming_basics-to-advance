#include<stdio.h>
int main(){
    int n;
    int bits[32];
    int i=0;
    printf("Enter the decimal number:");
    scanf("%d",&n);
    if(n==0){
        printf("0\n");
        return 0;
    }
    while(n>0){
        bits[i]=n%8;
        n=n/8;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        printf("%d",bits[j]);
    }
    printf("\n");
    return 0;
}
