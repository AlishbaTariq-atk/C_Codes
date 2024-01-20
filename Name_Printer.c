#include <stdio.h>
#include <string.h>

void print_names(int c);

int main(){
char str[100];
 char fil[]="names.txt";
   FILE *fp=fopen(fil,"r");
   if(fp==NULL){
    printf("Error!");
    return -1;
   }
   
   
   while(fgets(str,sizeof(str),fp)!=NULL){
    printf("\t%.4s\n",str);
   }
/*printf("----------1---------\n");
  printf("----------2---------\n");
  int sum=0;
  while(fscanf(fp,"%c\n",str)!=EOF){
     sum++;
  }
  printf("\nSum of the lengths is: %d\n",sum); 
  fclose(fp);*/ 
  printf("----------3-----------------------\n");
  int c;
    printf("Enter the length of names u want: ");
    scanf("%d",&c);
    print_names(c);
    fclose(fp);

   



    return 0;
}
void print_names(int c){

char fil[]="names.txt";
   FILE *fp=fopen(fil,"r");
   if(fp==NULL){
    printf("Error!");
       }
   char str[100];
    while(fscanf(fp,"%s\n",str)!=EOF)
    {
      int len=strlen(str);   
        if(len==c)
        {
        printf("%s\n",str);
        }
    }

}