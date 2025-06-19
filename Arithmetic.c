#include<stdio.h>
int main(){
    int num1,num2;
    char sym;
    printf("Enter the Expression:");
    scanf("%d %c %d",&num1,&sym,&num2);
    switch(sym){
        case '+':
        
        printf("%d",num1+num2);
        break;
        case '-':
        printf("%d",num1-num2);
        break;
        case '*':
        printf("%d", num1*num2);
        break;
        case '/':
        printf("%d", num1/num2);
        break;
        case '%':
        printf("%d", num1%num2);
        break;
        
    }
    
}
