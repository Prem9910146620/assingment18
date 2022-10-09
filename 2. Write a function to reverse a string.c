#include<stdio.h>
void reverse();
#include<string.h>
int main()
{
    char a[150];
    printf("enter the character\n");
    fgets(a,150,stdin);
    reverse(a);
    return 0;
}
void reverse(char b[])
{
    int i=0,j=strlen(b)-1;
    char t;
    for(i=0;i<=j;i++)
    {
       t=b[i];
        b[i]=b[j];
        b[j]=t;
        j--;
   }

    printf("%s",b);

    return 0;
}
