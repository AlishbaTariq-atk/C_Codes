#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    for(int i=1;i<7;i++){
 srand(time(NULL));
 int x=rand()%((16+1-1)-1);

printf("%d ",x);
    }
    return(0);
}