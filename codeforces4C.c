#include<stdio.h>
#include<string.h>
int main()
{
    char  x[100],y[100];
    gets(x);
    gets(y);
    int a=strcmp(x,y);
    if(a<0)
    {
        printf("%s\n",x);
    }
    else if(a==0)
    {
        printf("%s\n",y);
    }
    else if(a>0)
    {
        printf("%s\n",y);
    }
}
