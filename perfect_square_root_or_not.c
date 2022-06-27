#include<stdio.h>
#include<math.h>
int main()
{
    int s,n;
    scanf("%d",&n);
    s= (int)sqrt(n);
    if(s*s==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}