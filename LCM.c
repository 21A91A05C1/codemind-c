#include<stdio.h>
 int main()
 {
     int num1, num2, i, gcd, lcm;


     scanf("%d %d", &num1, &num2);

     for(i=1; i<=num1 && i<=num2; i++)
     {
         if(num1%i==0 && num2%i==0)
             gcd=i;
     }

     lcm=(num1*num2)/gcd;

     printf("%d",lcm);

     return 0;
 }