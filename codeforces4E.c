#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000010];
    gets(str);
    int i,a,sum=0;
    a=strlen(str);
    for(i=0;i<a;i++)
    {
        //str[i]-=48;            //eikhane ascii value hishab hocche.
       str[i]=str[i] - '0' ;         //tai char theke age 48 or '0' baad diye dibo

         sum+=str[i];

    }
    printf("%d\n",sum);
}
