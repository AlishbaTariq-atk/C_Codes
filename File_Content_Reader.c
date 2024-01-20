#include <stdio.h>

int main(){
   char fil[]="program.txt";
   FILE *fp=fopen(fil,"r");
   if(fp==NULL){
    printf("Error!");
    return -1;
   }
   char str[100];
   while(fgets(str,sizeof(str),fp)!=NULL){
    fprintf("%s",str);
   }
fclose(fp);

    return 0;
}