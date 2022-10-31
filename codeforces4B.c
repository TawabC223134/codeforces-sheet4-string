#include<stdio.h>
#include<string.h>
int main()
{
    char fn[1000010];
    int i,cnt;
    gets(fn);

    for(i=0;fn[i]!='\0';i++)
    {

        if(fn[i]== '\\')
        {
            break;
        }
        printf("%c",fn[i]);


    }

}
