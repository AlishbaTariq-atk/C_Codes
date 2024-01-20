#include <stdio.h>

int main()
{
int  num[9];
int count=0;
printf("Enter  9 integer for  an array: ");
for (int i=0;i<9;i++){

  scanf("%d",&num[i]);
  
for(int j=2;j<=i;j++)
{ 
    if (num[i]%j==0){
   count++;
    printf("\n%d",count); 
    }
    
    
}

}
 printf("\n Count of Prime number is: %d ",count);


    return 0;

}