#include <stdio.h>
#include <string.h>
void encrypt(char arr[],int key);
void decrypt(char arr[],int key);

int main(){
int key;
char arr[50];
printf("Enter a string to encrypt :");
fgets(arr,sizeof(arr),stdin);  
printf("\nEnter a number key to be used in order to encrypt the code: ");
scanf("%d",&key);
encrypt(arr,key);
decrypt(arr,key);

    return 0;
}
void encrypt(char arr[],int key){
char c;
for(int i=0;arr[i]!='\0';i++){
    c=arr[i];
    if(c>='a' && c<='z'){ // check for lowercase
       c=c+key;
     if(c> 'z')
     c=(c-'a'+key)%26+'a';
     arr[i]=c;
}

if(c>= 'A' && c<= 'Z'){   //check for uppercase
    c=c+key;
    if(c>'Z')
    c=(c-'A'+key)%26+'A';
    arr[i]=c;
}
}
printf("Encrypted code= %s",arr);
return;

}
void decrypt(char arr[],int key){

char c;
for(int i=0;arr[i]!='\0';i++){
    c=arr[i];
    if(c>='a' && c<='z'){ // check for lowercase
       c=c-key;
     if(c> 'z')
     c=(c-'a'-key+26)%26+'a';
     arr[i]=c;
}

if(c>= 'A' && c<= 'Z'){   //check for uppercase
    c=c-key;
    if(c>'Z')
    c=(c-'A'-key+26)%26+'A';
    arr[i]=c;
}
}
printf("Decrypted code= %s",arr);

    return;
}