#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the no of rows:");
    scanf("%d",&n);
    for(i = n/2;i>=1;i--)
    {
        printf("*");
        for(j=i;j>=1;j--)
           printf(" ");
        printf("*\n");
    }
    for(i = 1;i<=n/2;i++)
    {
        printf("*");
        for(j=1;j<=i;j++)
           printf(" ");
        printf("*\n");
    }
}
