#include <stdio.h>
#include <string.h>


int main(){
  
char name[10];
printf("Enter your name: ");
scanf("%s",name);
int x=strlen(name);
int res=0;
for(int i=0,j=x-1;i<x;i++){
    if(name[i]==name[j])
     {  j--;
       res=1;
     }
  else
    printf("Not Palindrome.");
    break;
} 

if (res==1)
  printf("Palindrome.");
    return 0;
} 
