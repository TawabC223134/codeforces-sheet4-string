#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,a,f=0;
    char str[100010];
     scanf("%d",&n);
     for(j=0;j<n;j++)
     {
         scanf("%s",str);
         a=strlen(str);
         for(i=0;i<a-2;i++)
         {
            f=0;
         if((str[i]=='0' && str[i+1]=='1' && str[i+2]=='0') || (str[i]=='1' && str[i+1]=='0' && str[i+2]=='1'))
         {
            f=1;
            break;

         }

         }
         if(f==1)
         {
             printf("Good\n");
         }
         else
         {
             printf("Bad\n");
         }

     }
}

