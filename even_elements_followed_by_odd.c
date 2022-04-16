#include<stdio.h>
int main()
{
    int n,i,odd[1000],even[1000],arr[1000],o=0,e=0,co=0,ce=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            o++;
            odd[co]=arr[i];
            co++;
        }
        else
        {
            e++;
            even[ce]=arr[i];
            ce++;
        }
    }
    for(ce=0;ce<e;ce++)
    {
        printf("%d ",even[ce]);
    }
    for(co=0;co<o;co++)
    {
        printf("%d ",odd[co]);
    }
}