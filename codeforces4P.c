
#include<stdio.h>
#include<string.h>
int main()
{
    int i,l,j,cnt=0;
    char str[1000010];
    gets(str);
    l=strlen(str);

    for(i=0;i<l;i++)
    {

        if((str[i]>='A' && str[i]<='Z') ||(str[i]>='a' && str[i]<='z'))
        {
            for(j=i;1;j++)
            {
                if(str[j]=='!' || str[j]=='.' || str[j]=='?' || str[j]==',' || str[j]==' ' || str[j]=='\0')
                {
                    cnt++;
                    i=j++;
                    break;
                }
            }
        }
    }
    printf("%d\n",cnt);
    return 0;

}
