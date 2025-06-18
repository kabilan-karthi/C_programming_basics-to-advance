#include<stdio.h>
int main(){
int year;
printf("Enter the year to check leapyear/not:");
scanf("%d",&year);
if(((year%4==0)&&(year%100!=0))||(year%400==0)){
    printf("It's a leapyear");
}
else{
    printf("It's not a leapyear");
}
}
