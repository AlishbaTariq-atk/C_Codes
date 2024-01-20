#include <stdio.h>
int earthquake(float mag);
int main(){

float mag; //magnitude
printf("Enter the magnitude of earthquake:");
scanf("%f",&mag);
 earthquake( mag);

    return(0);
}
int earthquake(float mag){
if (mag<2.0){
    printf("According to Ritcher scale the earthquake is micro");
}
else if(mag>=2.0 && mag<3.0){
    printf("According to Ritcher scale the earthquake is very minor");
}
else if (mag>=3.0 && mag<4.0){
    printf("According to Ritcher scale the earthquake is minor");
}
else if (mag>=4.0 && mag<5.0){
    printf("According to Ritcher scale the earthquake is light");
}
else if (mag>=5.0 && mag<6.0){
    printf("According to Ritcher scale the earthquake is moderate");
}
else if (mag>=6.0 && mag<7.0){
      printf("According to Ritcher scale the earthquake is strong");
}
else if (mag>=7.0 && mag<8.0){
    printf("According to Ritcher scale the earthquake is major");
}
else if (mag>=8.0 && mag<10.0){
    printf("According to Ritcher scale the earthquake is great");
}
else{
    printf("According to Ritcher scale the earthquake is meteroic");
}
   return(0);
}