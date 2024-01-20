#include <stdio.h>

int main(){
char str[100];

 printf("----------4-----------------------\n"); 
    char fil[]="names.txt";
   FILE *fp=fopen(fil,"r");
   if(fp==NULL){
    printf("Error!");
    return -1;
   }
   char new_file[]="name_subj.txt";
   FILE *pnf=fopen(new_file,"w");

    while(fscanf(fp,"%s\n",str)!=EOF){
    fprintf(pnf,"%s,Programming Fundamentals,Calculus,English Composition \n",str);
   } 
fclose(fp);
fclose(pnf);


    return 0;
}