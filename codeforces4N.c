#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,l,cnt=0;
    scanf("%d",&n);
    char str[n];
    scanf("%s",str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        if(str[i]!=str[i+1])
        {
          cnt++;
        }

    }
    printf("%d\n",cnt);


}
