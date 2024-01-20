#include <stdio.h>

int main(){
int table;
int *pt=&table;
int c;
int limit;
int *pl=&limit;
printf("Enter table: ");
scanf("%d",pt);
printf("\nEnter limit: ");
scanf("%d",pl);

for(int i=1;i<=*pl;i++){
    c=*pt * i;
    printf("%d * %d=%d\n",*pt,i,c);
}
return 0;




    return 0;
}