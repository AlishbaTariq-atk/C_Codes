#include<stdio.h>
int hcf();
int main(int argc, char const *argv[])
{
    int num1,num2,result;
printf("Enter num1: ");
scanf("%d",&num1);
printf("Enter num2: ");
scanf("%d",&num2);
result=hcf(num1,num2);
printf("The hcf of %d and %d is %d",num1,num2,result);


    return 0;
}
int hcf(int num1,int num2){
   int max,lcm2,gcd;

   if(num1>num2)
   max=num1;
   else 
   max=num2;

while(1)
  {    
    if (max%num1==0 && max%num2==0){
           lcm2=max;
   break;
  

    }
   max++;

    
    }
    gcd=(num1*num2)/lcm2;
    return(gcd);
}