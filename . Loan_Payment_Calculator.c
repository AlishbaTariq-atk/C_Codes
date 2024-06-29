#include <stdio.h>

int main(){
  int loan_amount;
  float int_per_year; //interest per year
  int mon_pay;  //monthly payment
  float int_per_mon; // interest per month;
  float mon_int;  //monthly interest
  int p_amount;  //principal amount;
  int count=0;

  printf("Enter the loan amount: $ ");
  scanf("%d",&loan_amount);
  printf("\nEnter the interest per year :  ");
  scanf("%f",&int_per_year);
  printf("\nEnter the monthly payment: $ ");
  scanf("%d", &mon_pay);

  int_per_mon=(int_per_year/12)/100;
  while(loan_amount>0){
    mon_int=loan_amount * int_per_mon;
    if(mon_pay<mon_int){
        printf("\nMOnthly payment too low!!");
    }
    p_amount=mon_pay-mon_int;
    loan_amount=loan_amount-(p_amount);
    count++;
  }
  printf("\nNumber of months required to pay the laon are %d.",count);


    return 0;
}