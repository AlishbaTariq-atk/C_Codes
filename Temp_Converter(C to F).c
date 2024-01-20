#include <stdio.h>
float  celsiusToFahrenheit();
int main()
{
    int celsius;
    float  result;
    printf("Enter the temperature in celcius: ");
    scanf("%d",&celsius);
   result=celsiusToFahrenheit( celsius);
   printf("\nThe temperature in Fahrenheit is:%.2f F",result);
    return(0);
}
 float celsiusToFahrenheit(int celsius)
 {

 float fahrenheit;
 fahrenheit=((float) celsius*9/5)+32; //explicit casting from int to float of celcius.
  
  return(fahrenheit);

 }
