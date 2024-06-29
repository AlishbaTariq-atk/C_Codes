#include <stdio.h>

int profit(int arr[10]);

int main(){
int arr[10];
printf("Enter elements of an array: \n");
for(int i=0;i<10;i++){
    printf("Enter arr[%d]= ",i);
    scanf("%d",&arr[i]);
}
    int result=profit(arr);
    if(result==-1)
    printf("No profit.");
    else
    printf("Profit=$ %d",result);




    return 0;
}
int profit(int arr[10]){
    int prof=0;
    int min=arr[0];
    int max=arr[0];
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
           if (arr[i]>arr[j]){
            min=arr[j];
          //  printf("%d\n",min);
           }
           if(arr[i]<arr[j]){
            max=arr[j];
           // printf("%d\n",max);
           }
           if(min<max && i<j){
            prof=max-min;
            // printf("%d\n",prof);
            return prof;
            break;
           }
           else
           return -1;
           break;

        }
    }
     
}