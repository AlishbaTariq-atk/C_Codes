#include <stdio.h>

int largest(int arr[3][4]);

int main(){

int arr[3][4];
printf("Enter values for 2-D matrix:\n");
for (int i=0;i<3;i++){
    for(int j=0;j<4;j++){
     printf("Enter arr[%d%d] :",i,j);
     scanf("%d",&arr[i][j]);
    }
}
int result= largest(arr);
printf("The largest value is : %d",result);


    return 0;
}
int largest(int arr[3][4]){
    int num=0;
   for (int i=0;i<3;i++){
    for(int j=0;j<4;j++){
    if (arr[i][j]>num)
    num=arr[i][j];
   }
}  
return num; 
}