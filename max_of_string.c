#include<stdio.h>
int main()
{
    char p[1000],max='A';
    scanf("%[^
]s",p);
    for(int i=0;p[i]!=NULL;i++)
    {
        if(p[i]>max)
        {
            max=p[i];
        }
    }
    printf("%c",max);
}
