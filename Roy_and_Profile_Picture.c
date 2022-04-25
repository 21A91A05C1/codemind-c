#include<stdio.h>
int main()
{
    int l,h,w,n,i;
    scanf("%d",&l);
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&w,&h);
        if(h<l || w<l)
        {
            printf("UPLOAD ANOTHER
");
        }
        else 
        {
            if(h==w)
            {
                printf("ACCEPTED
");
            }
            else
            {
                printf("CROP IT
");
            }
        }
    }
}