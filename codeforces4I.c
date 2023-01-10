#include<stdio.h>
#include<string.h>
int main()
{
   char str[1010];
   scanf("%s",str);
   int i,j,a,f=1;
   a=strlen(str);
   for(i=0,j=(a-1);i<a && j>=0;i++,j--)
   {
       f=1;
    if(str[i]!=str[j])
    {
        f=0;
        break;
    }
   }
   if(f==0)
   {
       printf("NO\n");
   }
   else
   {
       printf("YES\n");
   }
}
