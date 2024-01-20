#include <stdio.h>
int main()
{
 int ar[60];
 int i;
 int j;
 int k;
 for(i=0;i<20;i++)
 {
    j=i+20;
    k=i+40;
    ar[i]=i*i;
    ar[j]=j*j*j;
   ar[k]= i + k;
}

for (int j=0; j<60; j++){

    printf("%d , ",ar[j]);

}

return 0; 
}