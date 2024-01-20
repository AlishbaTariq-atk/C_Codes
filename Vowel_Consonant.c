#include <stdio.h>

int main()
{
 char alphabet;
 printf("Enter a letter in small case:");
 scanf("%c",&alphabet);
 switch(alphabet)
 {
    case 'a':
    printf("%c is  vowel",alphabet);
    break;
    case 'e':
        printf("%c is vowel",alphabet);
    break;
    case 'i':
    printf("%c is vowel",alphabet);
    break;
    case 'o':
    printf("%c is vowel",alphabet);
    break;
    case 'u':
    printf("%c is vowel",alphabet);
    break;
    default:
    printf("%c is consonant",alphabet);
 }

    return(0);
}