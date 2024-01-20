#include <stdio.h>
int pat(char sym);
int main(){
  char sym;
  int a;
 printf("Enter any symbol to show a pattern:");
scanf("%c",&sym); 
a=pat(sym);

return 0;

}

int pat(char sym)
{
int rows=5;
int i,j;

for(i=1;i<=rows;i++){
      for(j=1;j<=i;++j)
      printf("%c",sym);
      printf("\n");

  }
  rows=4;i=0;j=0;
for(i=1;i<=rows;i++){
      for(j=rows;j>=i;--j)
      printf("%c",sym);   
  printf("\n");   

  }
return 0;
}