#include<stdio.h>
int main()
{
int count=0;
int x;
printf("enter the number to search\n");
scanf("%d",&x);
int arr1[10]={1,2,4,2,3,4,9,8,9,2};
for(int i=0;i<10;i++)
{
if(arr1[i]==x)
{
count++;
}
}
printf("%d has appeared %d times .\n",x,count);
return 0;
}

