#include <stdio.h>
#include <stdlib.h>
int main()
{
FILE *fptr;
fptr = fopen("program.txt","w");
if(fptr == NULL)
{
printf("Error!");
exit(1);
}
fprintf(fptr,"Name:Alishba Tariq\n Roll No:22p-9112\n CGPA: 3.8");
fclose(fptr);
return 0;
}
