#include <stdio.h>

int main()
{
int num;
    int sum;
    int count=0;
    for(num=6;count<4 ;num++)
    {
        sum=0;
    for(int i=1;i<num;i++)
    {
        
        if(num%i==0)
        {
            sum=sum+i;
        }
        
    }
    if(sum==num)
    {
        printf("%d is a perfect number\n",num);
        count++;
    }
}
    return 0;
}