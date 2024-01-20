#include<stdio.h>
int comb();
int main(){

    int n,r;
   
   printf("Enter the value for n:");
   scanf("%d",&n);
   printf("\nEnter the value for r:");
   scanf("%d",&r);
   printf(" %d ",comb(n,r));


return(0);
}
int comb(int n,int r){
    int i,a;
 int factn=1,factr=1,factnr=1;
    int result;
    for(i=1;i<=n;++i){
    factn=factn*i;
}
for(i=1;i<=r;++i){
    factr=factr*i;
}
a=n-r;
for(i=1;i<=a;++i){
   factnr=factnr*i;

}
result=factn/(factr*factnr);
return (result);
}