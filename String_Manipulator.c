#include <stdio.h>
#include <string.h>

void vowel_count(char arr[]);
void vowel_cons(char arr[]);
void most_freq(char arr[]);
void concat(char arr[]);

int main(){
  char arr[10];
  char x;

  printf("Enter string :");
  scanf("%s",arr);

  for(x ; x!='E' ;){
  printf("\nEnter one of the following characters to perform the specified task:\n A) Count the number of vowels in the string\n B) Count both the vowels and consonants in the string\n C) Display the most frequent character in the string.\n D) Concatenate another string with the existing string.\n E) Exit the program.: ");
  scanf("\n%c",&x);
  if(x=='A')
 vowel_count(arr);
else if(x=='B')
 vowel_cons(arr);
else if(x=='C')
 most_freq(arr);
else if(x=='D')
 concat(arr);
else if(x=='E')
 break;
  }
  

    return 0;
}
void vowel_count(char arr[]){
    int count=0;
    for(int i=0;arr[i]!='\0';i++){
        if(arr[i]=='a' || arr[i]=='e' || arr[i]=='i' || arr[i]=='o' || arr[i]=='u')
        count++;
    }
    printf("Vowel count= %d",count);
}
void vowel_cons(char arr[]){
    int vow=0,con=0;
    for(int i=0;arr[i]!='\0';i++){
        switch (arr[i])
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        vow++;
            break;
        
        default:
        con++;
            break;
        }
    }
    printf("\nVowel count= %d",vow);
    printf("\nConsonant count=%d",con);
}
void most_freq(char arr[]){
    int count=0, max_count=0;
    char freq;
    for(int i=0;arr[i]!=0;i++){
        for(int j=i+1;arr[j]!=0;j++){
            if(arr[i]==arr[j]){
                count++;
                if(count>max_count){
                    max_count=count;
                    freq=arr[i];
                }   
            }
        }
    }

 printf("\nMOst frequent character = %c",freq);
}
void concat(char arr[]){
    char new[10];
    printf("\nEnter a new string to concatenate :");
    scanf("%s",new);
    strcat(new,arr);
    printf("\nNew string= %s",new);
    printf("\nOld string = %s",arr);
} 
