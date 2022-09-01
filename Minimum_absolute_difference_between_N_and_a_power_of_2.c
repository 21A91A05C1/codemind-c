#include<stdio.h>
#include<math.h>
int main()
{
    int n,min=99,res,k;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        k=pow(2,i);
        res=abs(k-n);
        if(res<min)
        {
            min=res;
        }
    }
    printf("%d",min);
}