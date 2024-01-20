#include <stdio.h>
void encrypt (int );

int main(){
 int num;
 printf("Enter a four digit number : ");
 scanf("%d",&num);
 encrypt(num);


    return 0;
}
void encrypt(int num){
    
    int a,b,c,d,e,f;
    int temp1,temp2;
    
    a=num/1000;   //first digit
    b=num%1000;
    c=b/100;      //2nd digit
    d=b% 100;
    e=d/10;       //3rd digit
    f=d%10;       //4th digit
{
    a=(a+7)%10;
    c=(c+7)%10;
    e=(e+7)%10;
    f=(f+7)%10;
}
 {                //swapping first and 3rd digits.
 temp1=a;    
 a=e;
 e=temp1;
 }
{                //swapping 2nd and 4th digits.
    temp2=c;
    c=f;
    f=temp2;
}
num=(a*1000)+(c*100)+(e*10)+(f*1);
printf("%4d",num);

return;
}