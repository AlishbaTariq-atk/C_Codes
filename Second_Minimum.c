#include <stdio.h>

int main(){
int arr[7];
for (int i=0;i<7;i++){
    printf("Enter arr[%d]: ",i);
    scanf("%d",&arr[i]);
}
int min;
int sec_min;
for (int i=0;i<7;i++)
{
    if (arr[i]<min){
    min=arr[i];
    sec_min=min;
}
else if (arr[i]<sec_min && arr[i]!=min)
    sec_min=arr[i];

}
printf("Second minimun is : %d",arr[1]);
   return 0;
}