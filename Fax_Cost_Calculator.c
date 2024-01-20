#include <stdio.h>
int fax(int pages);
int main(){
int pages;
printf("Enter the number of pages:");
scanf("%d",&pages);
fax(pages);
return(0);
}
int fax(int pages){
float sc=3.00; //service charges
float pp=0.20; // price per page 
float ap=0.10; //per for additional pages
float a; //price for 1st 10 pages
float b; //price for extra pages
float amount;
int extra_pages;

extra_pages = pages - 10;
a = extra_pages * ap;
b = 10 * pp;
amount = sc+a+b;
printf("The total amount for the pages to be faxed is: $ %.2f", amount);

    return(0);
}