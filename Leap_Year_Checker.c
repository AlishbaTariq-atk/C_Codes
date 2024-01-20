#include <stdio.h>
int isLeap();
int main()
{ int year;
int result;
printf("Enter  a year: ");
scanf("%d",&year);
result=isLeap(year);
    return(0);
}
int isLeap(int year)
{
if(year%400==0){
    printf("%d is a Leap year.",year); // leap yaer
}
else if(year%100==0){
    printf("\n%d is Not a Leap year.",year);  //not leap year 
}
else if(year%4==0){
printf("\n%d is Leap year",year);
}
else{
    printf("%d is Not a Leap year.",year); //leap year
    
}



    return(0);
}