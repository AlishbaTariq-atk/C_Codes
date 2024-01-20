#include<stdio.h>
float result( float n, float x, float sum );
float factorial(float a);
float power(float a, float b);

int main()
{
    float sum = 0;
    float n;
    float x;
    float a;

    printf("Enter the value of n: ");scanf("%f", &n);
    printf("Enter the value of x: ");scanf("%f", &x);
   
    a = result(n, x, sum);
    printf("%.1f \n", a);
    
    return 0;
}
float result(float n, float x, float sum)
{    
    
    for (float k = 0; k <= n; k++)
    {
      sum = sum + ( (1.0 * power(x, k)) / factorial(k) );
    }

    return sum;
}
float factorial (float a)
{
    
    float fact = 1;

    for (float i = 1; i <= a; i++)
    {
      fact = fact * i;
    }
    return fact;

}
float power(float a,float b)
{

    float  pow = 1;

    for(float i = 1; i <= b; i++)
    {
      pow = pow * a;
    }

 return pow;

}
