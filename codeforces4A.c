
#include<stdio.h>
int main()
{
    char str1[1010],str2[1010];
    int i,j,cnt1=0,cnt2=0;

       scanf("%s%s",str1,str2);


        for(i=0;str1[i]!='\0';i++)
        {
            cnt1++;
        }
        for(j=0;str2[j]!='\0';j++)
        {
            cnt2++;
        }
        printf("%d %d\n",cnt1,cnt2);
        printf("%s ",str1);
        printf("%s",str2);




        return 0;

}
