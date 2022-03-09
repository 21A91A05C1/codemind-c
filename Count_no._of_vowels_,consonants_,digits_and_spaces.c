#include<stdio.h>
int main()
{
    int i,c=0,d=0,k=0,p=0;
    char str[10000];
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    { 
        if(str[i]>='0' && str[i]<='9')
        {
            c++;
        }
        else if(str[i]==' ')
        {
            d++;
        }
        else if(str[i]=='e' || str[i]=='a' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            k++;
        }
        else
        {
            p++;
        }
        
    }
    printf("Vowels: %d
",k);
    printf("Consonants: %d
",p);
    printf("Digits: %d
",c);
    printf("White spaces: %d",d);
}