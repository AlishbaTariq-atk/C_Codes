#include <stdio.h>

void transp(int arr[2][2]);

int main(){
int arr[2][2];

for (int i=0; i<2;i++){
    for(int j=0;j<2;j++){
        printf("Enter arr[%d][%d] : ",i,j);
        scanf("%d",&arr[i][j]);
    }
}

 transp(arr);


    return 0;
}
void transp(int arr [2][2])
{
int temp1;
int b=arr[0][1];
int c=arr[1][0];
arr[0][1] = c;
arr [1][0]= b;
for(int i=0;i<2;i++){
for(int j=0;j<2;j++){
printf("%d\t",arr [i][j]);
}
printf("\n");
}
return ;

}
