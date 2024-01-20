#include <stdio.h>
int lcm(){};
int main()
{
    int num1, num2;
    printf("Enter num1: ");
    scanf("%d",&num1);
    printf("\nEnter num2: ");
    scanf("%d",&num2);
  int ans=  lcm(num1,num2);
    printf("LCM of %d and %d is %d",num1,num2,ans);
    return 0;
}
int lcm(int num1,int num2){
   int max,lcm2;

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
    return(lcm2);
}
