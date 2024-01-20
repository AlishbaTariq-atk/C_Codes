#include<stdio.h>
int fact();
int main (){

int num,a;
printf("Enter a number to find its facotrial:");
scanf("%d",&num);
a=fact(num);
printf("\nFactoiral is : %d",a);
return(0);
}
int fact(int num){
    if (num<=1)
    return(num);
    else 
    return(num*fact(num-1));
}
