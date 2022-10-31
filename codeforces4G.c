#include<stdio.h>
#include<string.h>
int main()
{
    char str[100010];
    int i,l;
    scanf("%s",str);
    l= strlen(str);
    for(i=0;i<l;i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]+=32;
            printf("%c",str[i]);
        }
        else if(str[i]>='a' && str[i]<='z')
        {
            str[i]-=32;
            printf("%c",str[i]);
        }
        else if(str[i]== ',')
        {
            printf(" ");
        }
    }

}
