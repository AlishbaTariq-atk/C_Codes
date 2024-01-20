#include <stdio.h>

int main()
{
int num,i;
printf("Enter a number to find its factors:");
scanf("%d",&num);
printf("\nThe factors of %d are: ",num);
for(i=2; i<num; ++i){
    if(num%i==0){
        printf("\n%d",i);
    }
}


return(0);
}

