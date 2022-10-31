#include<stdio.h>
#include<string.h>
int main()
{
    char str[110],x,y;
    int t,i,j,a,cnt;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {

        scanf("%s",str);    //gets(str); hobe na kno?
        a = strlen(str);
        if(a<=10)
        {
            printf("%s\n",str);

        }
        else if(a>10)
        {
            x=str[0];
               y=str[a-1];
               cnt=0;
            for(j=1;j<(a-1);j++)
            {
                cnt++;
            }
            printf("%c%d%c\n",x,cnt,y);
        }
    }
    return 0;
}
