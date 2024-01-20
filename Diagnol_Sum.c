#include <stdio.h>

int main(){

int arr[3][3];
for (int i=0;i<3;i++){
    for( int j=0;j<3;j++){
    printf("Enter arr[%d][%d] : ",i,j);
    scanf("%d",&arr[i][j]);
}
}
int sum= arr[0][0]+arr[1][1]+arr[2][2];
printf("Addition of Diagonal Elements is: %d",sum);
    return 0;
}