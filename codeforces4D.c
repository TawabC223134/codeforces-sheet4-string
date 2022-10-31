#include<stdio.h>
#include<string.h>
int main()
{
    char s1[10],s2[10],s3[10],temp;
    gets(s1);
    gets(s2);
    printf("%d %d\n",strlen(s1),strlen(s2));
    strcpy(s3,s1);
    strcat(s1,s2);
    printf("%s\n",s1);
    temp=s3[0];
    s3[0]=s2[0];
    s2[0]=temp;
    printf("%s %s\n",s3,s2);

}
