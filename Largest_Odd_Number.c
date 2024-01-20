#include <stdio.h>
int oddx();
int oddy();
int oddz();
int main()
{
int x,y,z;
printf("Enter the value for num1: "); //first number
scanf("%d",&x);
printf("\nEnter the value for num2: "); //second number
scanf("%d",&y);
printf("\nEnter the value for num3: "); //third number
scanf("%d",&z);

if(oddx(x) && oddy(y) && oddz(z)){   // odd,odd,odd
    if(x>y && x>z)
    printf("%d is the largest odd number",x);
    else if(y>x && y>z)
    printf("\n%d is the largest odd number.",y);
    else 
    printf("\n%d is the largest odd number.",z);
}
else if(oddy(y) && oddz(z)){         // even,odd,odd
    if(y>z)
    printf("\n%d is the largest number.",y);
    else
    printf("\n%d is the largest number.",z);
}
else if(oddx(x) && oddz(z)){         // odd,even,odd
    if(x>z)
    printf("\n%d is the largest odd number.",x);
    else
    printf("\n%d is the largest odd number.",z);
}
else if(oddx(x) && oddy(y)){         // odd,odd,even
    if(x>y)
    printf("\n%d is the largest odd number.",x);
    else 
    printf("\n%d is the largest odd number.",y);
}
else if(oddx(x)){                    // odd,even,even
    printf("\n%d is the largest odd number.",x);
}
else if(oddy(y)){                    // even,odd,even
    printf("\n%d is the largest odd number.",y);
}
else if(oddz(z)){                     // even,even,odd
    printf("\n%d is the largest odd number.",z);
}
else {
    printf("\n None of the three is odd.");  // even,even,even
}


    return(0);
}
int oddx(int x){
    if(x%2!=0)
    return(x); //x id odd
}

int oddy(int y){
    if (y%2!=0)
    return(y); //y is odd
}

int oddz(int z){
    if(z%2!=0)
    return(z); //z is odd
}