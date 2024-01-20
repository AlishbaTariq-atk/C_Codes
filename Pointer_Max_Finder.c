#include <stdio.h>

int main(){

int num1;
int *p1=&num1;
int num2;
int *p2=&num2;
printf("Enter num1=");
scanf("%d",p1);
printf("Enter num2=");
scanf("%d",p2);

printf("Max num=");
if(*p1>*p2)
printf("%d",*p1);
else
printf("%d",*p2);

    return 0;
}