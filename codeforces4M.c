#include<stdio.h>
#include<string.h>
int main()
{
    char str[10010],x[6]="hello";
    int i,j,l,s;
    scanf("%s",str);
    l=strlen(str);
    s=strlen(x);
    j=0;
    for(i=0;i<l;i++)
    {
        if(i==l || j==s)
        {
            break;
        }
        if(str[i]==x[j])
        {
            j++;
        }
    }
    if(j==5)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}
