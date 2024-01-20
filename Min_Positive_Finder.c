#include <stdio.h>

int find_Small_val(int A[]);
int main(){
    int A[4]={1,2,3,4};
   
int result=find_Small_val(A);
printf("The samllest positive integer not in this array is : %d",result);
 return 0;   
}
int find_Small_val(int A[]){
    int min=0;
    for(int i=0; ;i++){
     if (i!=A[4])
     min=i;
     break;
    }
    return min;
}
