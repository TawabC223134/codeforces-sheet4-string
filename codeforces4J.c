#include<stdio.h>
#include<string.h>
int main()
{
    char str[10000010] ; //range change kore nibo
    int i,n,cnt[123];
    gets(str);
    n=strlen(str);
    for(i=97;i<123;i++)
    {
        cnt[i]=0;
    }
    for(i=0;i<n;i++)
    {
        cnt[str[i]]++;
    }
    for(i=97;i<123;i++)
    {
        if(cnt[i]>0)
        {
            printf("%c : %d\n",i,cnt[i]);
        }
    }

}
