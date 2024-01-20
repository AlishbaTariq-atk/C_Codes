#include <stdio.h>
int trianlge(int x,int y, int z);
int main()
{
int x ,y,z,a;
printf("Enter the value for sides of a triangle:");
printf("\nx:"); //side 1
scanf("%d", &x);
printf("\ny:");  //side 2
scanf("%d",&y);
printf("\nz:");  //side 3
scanf("%d",&z);

a=trianlge( x, y, z);
    return(0);
}
int trianlge(int x,int y, int z){
    if(x==z && y==z && x==y){
        printf("\nThe triangle is Equilateral");
    }
    else if(x==y || y==z || x==z){
        printf("\nThe triangle is Isosceles.");
    }
    else{
        printf("\nThe triangle is scalene.");
    }
    return(0);
}