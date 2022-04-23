#include <stdio.h>
int main() 
{
    int n,s=0,i,j,q;
    scanf("%d",&n);//5
    int l=2*n-1;//9
    int a[l][l];//a[9][9]
    q=l-1;//8
    while(n)
    {
    for(i=s;i<=q;i++)//i=0;i<=8;i++
    {
        for(j=s;j<=q;j++)//j=0;j<=8;j++
        {
            if(i==s || i==q||j==s ||j==q)//i==0|| i==8 || j==0||j==8
            {
                a[i][j]=n;//
            }
        }
    }
    s++;
    --q;
    --n;
    }
    
    for(i=0;i<l;i++)
    {
        for(j=0;j<l;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("
");
    }
    
    return 0;
}
