#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int arr[12]={0};
    
    srand(time(NULL));

 int dice1,dice2;
  for (int i = 0; i < 1000; ++i)
 {
  dice1 = rand() % ((6-1+1)+1);
  dice2 = 1 + rand() % ((6-1+1)+1);
  arr[dice1 + dice2]++;
 }
 for (int i = 1; i <= 12; ++i)
 {
  printf("%d \n",arr[i]);
 }
 return 0;
}

