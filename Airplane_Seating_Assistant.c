#include <stdio.h>

int main(){
char arr[13][6]={{'*','*','*','*','*','*'},{'*','*','*','*','*','*'},{'*','*','*','*','*','*'},{'*','*','*','*','*','*'},{'*','*','*','*','*','*'},{'*','*','*','*','*','*'},{'*','*','*','*','*','*'},{'*','*','*','*','*','*'},{'*','*','*','*','*','*'},{'*','*','*','*','*','*'},{'*','*','*','*','*','*'},{'*','*','*','*','*','*'},{'*','*','*','*','*','*'}};
  char type; //tciket type;
  int row;
  int seat;
  
   while(1){
     for(int i=0;i<13;i++){
    printf("\nRow(%d) ",i+1);
    for(int j=0;j<6;j++){
        printf(" %c ",arr[i][j]);
    }
   }
   printf("\nEnter the ticket type :\nF-----Fisrt class\nB-----Bussiness Class\nE-----Economy Class \n N-----Exit: ");
   scanf("%c",&type);
   if(type=='N'){
    break;
   }
   else if(type=='F'){
    printf("\nEnter row among 1 and 2 : ");
    scanf("%d",&row);
    printf("\nEnter desired seat number as : \n0---A\n1---B\n2---C\n3---D\n4---E\n5---F : ");
    scanf("%d",&seat);
    for(int i=0;i<row;i++){
        for(int j=0;j<6;j++){
            if(arr[row][seat]=='*'){
            printf("Seat Available.");
            arr[row][seat]='X';
            break;
            }
            else 
           { printf("Seat Not Available..Kindly choose another.");
           break;
           }
        }
    }
   }
   else if(type=='B'){
    printf("\nEnter row among 3,4,5,6 and 7 : ");
    scanf("%d",&row);
    printf("\nEnter desired seat number as : \n0---A\n1---B\n2---C\n3---D\n4---E\n5---F : ");
    scanf("%d",&seat);
    for(int i=0;i<row;i++){
        for(int j=0;j<6;j++){
            if(arr[row][seat]=='*'){
            printf("Seat Available.");
            arr[row][seat]='X';
            break;
            }
            else 
           { printf("Seat Not Available..Kindly choose another.");
            break;
           }
        }
    }
   }
   else{
    printf("\nEnter row among 8,9,10,11,12 and 13 : ");
    scanf("%d",&row);
    printf("\nEnter desired seat number as : \n0---A\n1---B\n2---C\n3---D\n4---E\n5---F : ");
    scanf("%d",&seat);
    for(int i=0;i<row;i++){
        for(int j=0;j<6;j++){
            if(arr[row][seat]=='*'){
            printf("Seat Available.");
            arr[row][seat]='X';
            break;
            }
            else 
           { printf("Seat Not Available..Kindly choose another.");
            break;
           }
        }
    }
   }
   }
    return 0;
}