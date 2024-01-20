#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    int count;
    printf("Enter any number:");
    scanf("%d",&num);
    while(num>0)
    {
        num=num/10;
        count=count+1;
    }
    printf("\nThe number of digits are: %d",count);
    return 0;
}
