#include <stdio.h>
int result();
int main()
{
int x,y,z,a;

printf("Enter the total number of cookies:");
scanf("%d",&x);   //x=total cookies
printf("\nEnter the number of cookies in a single box:");
scanf("%d",&y);    // y=cookies in a single box
printf("\nEnter the number of boxes in a single container:");
scanf("%d",&z);    // z=boxes ina single container
a = result(x,y,z);   //function calling
printf("%d",a);

    return(0);
}
int result(int x,int y,int z)
{
int req_boxes;  //boxes acctually required to ship
int remaining_cookies;  //cookies left
int req_containers;  //conatiners actually required to ship
int remaining_boxes;  //leftout boxes
req_boxes = x/y;
remaining_cookies = x%y;
printf("\nThe number of boxes required for cookies are: %d",req_boxes);
if (remaining_cookies<y)
{
    printf("\nThe left over cookies are: %d",remaining_cookies);
}
req_containers = req_boxes/z;
remaining_boxes = req_boxes%z;
printf("\nThe number of containers required for boxes are: %d",req_containers);
if(remaining_boxes<z)
{
    printf(" The left over boxes are: %d\n", remaining_boxes);
}

    return 0;
}   