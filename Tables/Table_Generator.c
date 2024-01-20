#include <stdio.h>

int  main()
{
int num,count,a;
printf("Enter a number :");
scanf("%d",&num);
for(count=1;count<11; ++count)
{
    a=num*count;
    printf("%d * %d= %d\n",num,count,a);
}
    return(0);
}
